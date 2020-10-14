#include "register.h"
#include "login.h"
#include "ui_register.h"
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QFile>

extern QString myname;

Register::Register(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
}

Register::~Register()
{
    delete ui;
}

void Register::on_rExit_clicked()
{
    emit back();
    this->close();
//    login *lg = new login;
//    lg->show();
//    delete this;

}

void Register::on_rRegister_2_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE","db");
    db.setDatabaseName("/Users/wangweiwei/Qt5.9.9/my_qt/my.db");
    db.open();
    QString username = ui->rUsername->text();
    QString password1 = ui->rPassword->text();
    QString password2 = ui->rePssword->text();

    if(!username.isEmpty() && !password1.isEmpty() && !password2.isEmpty() && password1 == password2)
    {
        QSqlQuery query1(db);
        QString sql = QString ("select * from userinfo where username = '"+username+"'");
        query1.exec(sql);

        if(!query1.next())
        {
            QString cmd=QString("insert into userinfo values('%1','%2')").arg(username) .arg(password1);

            QSqlQuery query(db);
            if(query.exec(cmd))
            {
                myname = username;
                QSqlDatabase dbb = QSqlDatabase::addDatabase("QSQLITE","dbb");
                dbb.setDatabaseName("/Users/wangweiwei/Qt5.9.9/my_qt/" + myname + ".db");
                dbb.open();
                QSqlQuery query1(dbb);
                QString sql = QString ("create table if not exists Mytask (task varchar(64) unique, startTime varchar(64) , endTime varchar(64) , priority INTEGER , reTime varchar(64))");
                query1.exec(sql);
                QMessageBox::information(this, "注册提示","注册成功");
            }
            else
            {
                QMessageBox::information(this, "注册提示","注册失败");
            }

        }
        else
        {
            QMessageBox::information(this,"注册提示","用户名已存在，请重新输入");
        }
    }
    else
    {
        QMessageBox::information(this,"注册提示","输入内容为空或两次密码不一致，请重新输入");
    }
}
