#include "addtask.h"
#include "ui_addtask.h"
#include <QSqlQuery>
#include <QDebug>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QDateTime>
#include "taskalert.h"


extern QString myname;


AddTask::AddTask(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddTask)
{
    ui->setupUi(this);
}

AddTask::~AddTask()
{
    delete ui;
}

void AddTask::on_back_clicked()
{
    emit back();
    this->close();
}

void AddTask::on_add_clicked()
{ QSqlDatabase db2 = QSqlDatabase::addDatabase("QSQLITE","adconnect");
    db2.setDatabaseName("/Users/wangweiwei/Qt5.9.9/my_qt/" + myname + ".db");
    db2.open();
    QString task = ui->task->text();
    QString startTime = ui->startTime->dateTime().toString("yyyy/M/d H:mm");
    QString endTime = ui->endTime->dateTime().toString("yyyy/M/d H:mm");
    QString reTime = ui->remainTime->dateTime().toString("yyyy/M/d H:mm");
    int priority = ui->priority->value();
    if(task.isEmpty())
    {
        QMessageBox::information(this,"添加提示","添加任务不能为空");
    }
    else
    {   QSqlQuery query1(db2);
        QString sql = QString ("select * from Mytask where task = '"+task+"'");
        query1.exec(sql);

        if(!query1.next())
        {
            QString suc = QString("insert into Mytask values('%1','%2','%3','%4','%5')").arg(task).arg(startTime).arg(endTime).arg(priority).arg(reTime);
            QSqlQuery query2(db2);

            if(!query2.exec(suc))
            {
                qDebug()<<"sql fail";
            }
            emit add1(task);

            QMessageBox::information(this,"添加提示","<font size = '20' color='black'>添加任务成功</font>");


            long toTime = ui->remainTime->dateTime().toTime_t(); // 10位 second
            long fromTime = QDateTime::currentDateTime().toTime_t();
            auto taskAlert = new TaskAlert;
            taskAlert->timerStart((toTime - fromTime)*1000);

        }

        else
        {
             QMessageBox::information(this,"添加提示","<font size = '20' color='black'>此任务已存在</font>");
        }
    }
    db2.close();

}
//该用update更新数据

