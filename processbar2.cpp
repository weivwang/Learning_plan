#include "processbar2.h"
#include "ui_processbar2.h"
#include<QBrush>
#include<QPalette>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QString>
#include <QSqlRecord>
#include <QDebug>
#include <QSqlField>
#include <QChar>
#include <cmath>
#include <QTime>
#include <QDateTime>

extern QString myname;

processbar2::processbar2(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::processbar2)
{
    ui->setupUi(this);
        QLabel *labProcess = new QLabel;
        labProcess->setText("今日任务完成进度：");
        labProcess->setMargin(90);
        labProcess->setVisible(true);
        //change color
        QPalette pe;
        pe.setColor(QPalette::WindowText,Qt::white);
        labProcess->setPalette(pe);
        QFont font("Microsoft YaHei",10,75);
         labProcess->setFont(font);

         QLabel *nowProcess = new QLabel;
         nowProcess->setText("现在任务完成进度：");
         nowProcess->setMargin(90);
         nowProcess->setVisible(true);
         nowProcess->setPalette(pe);
         nowProcess->setFont(font);

         //getalltask
         QSqlDatabase db2 = QSqlDatabase::addDatabase("QSQLITE","wconnect");
         db2.setDatabaseName("/Users/wangweiwei/Qt5.9.9/my_qt/" + myname + ".db");
         bool ok = db2.open();
         if(ok)
         {
         qDebug()<<"connect ok!";
         }
         else
         {
         qDebug()<<"connect error!";
         }
         QSqlTableModel *model = new QSqlTableModel(this,db2);
         model->setTable("Mytask");
         model->select();
         int row = model->rowCount();
         qDebug()<<row;
         QString name[100];
         int time[100];
         int tottime = 0;
         int finishtime = 0;
         int nowdotime = 0, nowfinishtime = 0;
         QTime current_time =QTime::currentTime();
         int ch = current_time.hour();
         int cm = current_time.minute();
         bool b = false;
         for (int i=0; i<row; i++)
         {
             QSqlRecord a = model -> record(i);
             //qDebug() << a;
             name[i] = a.field(0).value().toString();
             //qDebug() << name;
             QString from = a.field(1).value().toString();
             QString to = a.field(2).value().toString();
             from = from.split(" ").at(1);
             to = to.split(" ").at(1);
             int fh = from.split(":").at(0).toInt();
             int fm = from.split(":").at(1).toInt();
             int th = to.split(":").at(0).toInt();
             int tm = to.split(":").at(1).toInt();
             time[i] = (th-fh) * 60 + tm-fm;
             qDebug() << from << to << QString::number(time[i]);
             tottime += time[i];
             if (ch > fh || (ch == fh && cm >= fm))
             {
                if (ch > th || (ch == th && cm > tm))
                {
                    finishtime += time[i];
                }
                else
                {
                    nowdotime = time[i];
                    nowfinishtime = ((ch-fh) * 60 + cm-fm);
                    finishtime += nowfinishtime;
                    b = true;
                }
             }
             //series->append(name[i],time[i]);
         }
        qDebug() << tottime << finishtime << nowdotime << nowfinishtime;
        QProgressBar *thistask = new QProgressBar;
        double dProgress = (double)finishtime/(double)tottime;
        thistask->move(100,60);
        thistask->setRange(0,100);//设置范围
        thistask->setMinimum(0);//设置最小值
        thistask->setMaximum(100);//设置最大值，应改为设定任务总数
        thistask->setValue((int)(100.0 * dProgress));//设置当前值，应改为当前完成任务数

        QProgressBar *nowtask = new QProgressBar;
        double nowProgress = (double)nowfinishtime/(double)nowdotime;
        nowtask->move(100,60);
        nowtask->setRange(0,100);//设置范围
        nowtask->setMinimum(0);//设置最小值
        nowtask->setMaximum(100);//设置最大值，应改为设定任务总数

        thistask->setFormat(tr("今天任务完成进度:%1%").arg(QString::number(dProgress * 100.0,'f',1)));
        thistask->setAlignment(Qt::AlignLeft|Qt::AlignVCenter); //位置
        thistask->setTextVisible(true);
        thistask->setVisible(true);
        if (b)
        {
            nowtask->setValue((int)(100.0 * nowProgress));
            nowtask->setFormat(tr("现在的任务完成进度:%1%").arg(QString::number(nowProgress * 100.0,'f',1)));
            nowtask->setAlignment(Qt::AlignLeft|Qt::AlignVCenter); //位置
            nowtask->setTextVisible(true);
            nowtask->setVisible(true);
        }
        else
        {
            nowtask->setValue(0);//没有任务
            nowtask->setFormat(tr("现在没有任务，休息一下吧"));
            nowtask->setAlignment(Qt::AlignLeft|Qt::AlignVCenter); //位置
            nowtask->setTextVisible(true);
            nowtask->setVisible(true);
        }
        QGridLayout *processLayout = new QGridLayout;
        processLayout->addWidget(labProcess,0,0);
        processLayout->addWidget(thistask,0,1);
        processLayout->addWidget(nowProcess,1,0);
        processLayout->addWidget(nowtask,1,1);

        setLayout(processLayout);
        myButton=new QPushButton(this);
        myButton->setText("返回");
        myButton->show();
        myButton->setStyleSheet("border-radius:14px; background-color: rgb(198, 255, 244);");

        connect(myButton,&QPushButton::clicked,this,&processbar2:: returnTo);
       //设置背景：
        QPixmap pixmap(":/back7.jpg"); //背景图
        setAutoFillBackground(true);
        QPalette palete;   //调色板
        palete.setBrush(backgroundRole(),QBrush(pixmap));
        this->setPalette(palete);
}

processbar2::~processbar2()
{
    delete ui;
}

void processbar2::returnTo(){
    emit back();
    this->hide();
}

