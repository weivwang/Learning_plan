#include "dynamic_button.h"
#include "ui_dynamic_button.h"
#include "addtask.h"
#include "attribute.h"
#include "mpushbutton.h"
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QString>
#include <QSqlRecord>
#include <QDebug>
#include <QSqlField>
#include <QChar>
#include <cmath>

extern QString myname;

Dynamic_button::Dynamic_button(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Dynamic_button)
{
    ui->setupUi(this);
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
            for (int i=0; i<row; i++)
            {
                QSqlRecord a = model -> record(i);
                QString t = a.field(0).value().toString();
                mPushbutton *btn = new mPushbutton;
                ui->verticalLayout->addWidget(btn);
                btn->setText(t);
            }
}

Dynamic_button::~Dynamic_button()
{
    delete ui;
}



void Dynamic_button::on_addTask_clicked()
{
    AddTask *add = new AddTask;
    add->show();
    this->hide();
    connect(add,SIGNAL(add1(QString)),this,SLOT(addButton(QString)));
    connect(add,SIGNAL(back()),this,SLOT(showTask()));

}


void Dynamic_button::showTask()
{
    this->show();
}

void Dynamic_button::addButton(QString t)
{

    mPushbutton *btn = new mPushbutton;
    ui->verticalLayout->addWidget(btn);
    btn->setText(t);

}


void Dynamic_button::on_Dback_clicked()
{
    emit back();
    this->close();
}
