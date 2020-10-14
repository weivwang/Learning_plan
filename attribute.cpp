#include "attribute.h"
#include "ui_attribute.h"
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QDebug>
#include <QMessageBox>

extern QString myname;

attribute::attribute(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::attribute)
{
    ui->setupUi(this);

}

attribute::~attribute()
{
    delete ui;
}

void attribute::on_Aback_clicked()
{
    emit back();
    this->close();
}

void attribute::receive() {
    QSqlDatabase db2 = QSqlDatabase::addDatabase("QSQLITE","rconnect");
    db2.setDatabaseName("/Users/wangweiwei/Qt5.9.9/my_qt/" + myname + ".db");
    db2.open();
    QString task = ((QPushButton*)sender())->text();
    QSqlQuery query(db2);
    query.exec("select * from Mytask where task = '"+task+"'");
    if(!query.exec("select * from Mytask where task = '"+task+"'"))
    {
        qDebug()<<"fail";
    }

    if(query.first())
    {
        qDebug()<<"exec first()";

        QString start = query.value(1).toString();

        QString end = query.value(2).toString();

        QString priority = query.value(3).toString();

        QString re = query.value(4).toString();

        ui->arStartTime->setText(start);

        ui->arEndTime->setText(end);

        ui->arPriority->setText(priority);

        ui->arReTime->setText(re);
    }

    ui->arTask->setText(task);


    this->show();
}


void attribute::on_change_clicked()
{

        QSqlDatabase db2 = QSqlDatabase::addDatabase("QSQLITE","chconnect");
        db2.setDatabaseName("/Users/wangweiwei/Qt5.9.9/my_qt/" + myname + ".db");
        db2.open();
        QString task = ui->arTask->text();
        QString start = ui->arStartTime->text();
        QString end = ui->arEndTime->text();
        QString priority = ui->arPriority->text();
        QString re = ui->arReTime->text();
        QString update = QString("update Mytask set startTime = '" + start +"',endTime = '"+end+"',priority = '"+priority+"', reTime = '"+re+"' where task = '"+task+"'" );
        QSqlQuery query(update,db2);
        if(query.exec())
        {
           QMessageBox::information(this,"任务提示","<font size = '20' color = 'black'>修改成功</font>");
        }
        db2.close();
}

void attribute::on_finish_clicked()
{

    QSqlDatabase db2 = QSqlDatabase::addDatabase("QSQLITE","weconnect");
    db2.setDatabaseName("/Users/wangweiwei/Qt5.9.9/my_qt/" + myname + ".db");
    db2.open();
    QString task = ui->arTask->text();
    QString delete1 = QString(" delete from Mytask where task = '"+task+"'");
    QSqlQuery query(delete1,db2);
    if(query.exec())
    {
       QMessageBox::information(this,"任务提示","<font size = '20' color = 'black'>任务已完成</font>");
    }
    db2.close();

}
