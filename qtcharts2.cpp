#include "qtcharts2.h"
#include "ui_qtcharts2.h"
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

extern QString myname;

Qtcharts2::Qtcharts2(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Qtcharts2)
{
    ui->setupUi(this);
    qDebug() << myname;
    QPushButton *returnTo_LastPage = new QPushButton("返回");
    returnTo_LastPage->setFixedSize(100,50);
     returnTo_LastPage->setStyleSheet("border-radius:14px; background-color: rgb(198, 255, 244);");
    returnTo_LastPage->show();  //设置返回按钮

    QPieSeries *series = new QPieSeries();//新建

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
    //qDebug()<<row;
    model->removeColumn(3);
    model->removeColumn(3);
    model->removeColumn(3);
    QString name[100];
    int time[100];
    int tottime = 0;
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
        //series->append(name[i],time[i]);
    }
    for (int i=0; i<row; i++)
    {
        double tmp = (double)time[i] / (double)tottime;
        int tt = std::round(tmp * 100);
        name[i] = name[i] + ' ' + QString::number(tt) + '%';
        series->append(name[i],time[i]);
    }
    series->setHoleSize(0.35);//形成饼状图 中空的效果
    //series->append("运动 10%",1); //此处为默认数据，加入数据库后，将名称改为自定义的主题
    //series->append("学英语 30%",3);//比例需要用数据库内容进行计算
    //series->append("复习高数 60%",6);
    series->setLabelsVisible(true);
    if (row >= 1)
    {
        QPieSlice *slice_red = series->slices().at(0);
        slice_red->setColor(QColor(255,0,0,255));
    }
    if (row >= 2)
    {
        QPieSlice *slice_green = series->slices().at(1);
        slice_green->setColor(QColor(0,255,0,255));
    }
    if (row >= 3)
    {
        QPieSlice *slice_blue = series->slices().at(2);
        slice_blue->setColor(QColor(0,0,255,255));
    }

    //设置每一块的颜色

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("时长统计");
    chart->legend()->hide();

    QChartView *chartview = new QChartView(chart);
    chartview->setRenderHint(QPainter::Antialiasing);

    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->addWidget(chartview);
    mainLayout->addWidget(returnTo_LastPage,0,Qt::AlignCenter);

    setLayout(mainLayout);
    setWindowTitle("时长统计");
     connect(returnTo_LastPage,&QPushButton::clicked,this,&Qtcharts2:: returnTo);

     QPixmap pixmap(":/back8.jpg"); //背景图
     setAutoFillBackground(true);
     QPalette palete;   //调色板
     palete.setBrush(backgroundRole(),QBrush(pixmap));
     this->setPalette(palete);

     //将图背景设置为了透明：
      chart->setBackgroundVisible(false);

}

Qtcharts2::~Qtcharts2()
{
    delete ui;
}
void Qtcharts2:: returnTo(){
    emit back();
    this->hide();
}
