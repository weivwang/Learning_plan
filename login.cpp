#include "login.h"
#include "mainmenu.h"
#include "register.h"
#include "ui_login.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QDebug>
extern QString myname;

login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
    ui->username->setPlaceholderText("账号");
    ui->password->setPlaceholderText("密码");
}

login::~login()
{
    delete ui;
}



void login::showMain()
{
    this->show();
    //原来的数据清空
    ui->username->clear();
    ui->password->clear();
}

void login::on_login_2_clicked()
{
    QSqlDatabase db1 = QSqlDatabase::addDatabase("QSQLITE","db1");
    //数据库命名
    db1.setDatabaseName("/Users/wangweiwei/Qt5.9.9/my_qt/my.db");
    db1.open();
    //打开数据库
    QString username = ui->username->text();
    QString password = ui->password->text();

    if(!username.isEmpty()&&!password.isEmpty())
    {
        //查询数据库验证
        QSqlTableModel *model = new QSqlTableModel(this,db1);
        model->setTable("userinfo");
        model->setFilter(QString("username='%1' and password='%2'")
                             .arg(username).arg(password));
        model->select();

        //检查是否查询到数据
        int row = model->rowCount();
        if(row> 0)
        {
            myname = username;
            QSqlDatabase dbb = QSqlDatabase::addDatabase("QSQLITE","dbb");
            dbb.setDatabaseName("/Users/wangweiwei/Qt5.9.9/my_qt/" + myname + ".db");
            dbb.open();
            QSqlQuery query1(dbb);
            QString sql = QString ("create table if not exists Mytask (task varchar(64) unique, startTime varchar(64) , endTime varchar(64) , priority INTEGER , reTime varchar(64))");
            if (query1.exec(sql)) qDebug() << "createok";
            else qDebug() << "createfail";
            this->hide();
            MainMenu *main = new MainMenu;
            main->show();
            connect(main,SIGNAL(back()),this,SLOT(showMain()));
        }
        else
        {
            QMessageBox::information(this, "login提示","login失败");
        }

            delete model;
    }
    else
    {
        QMessageBox::information(this,"login提示","账号或密码不能为空");
    }
}

void login::on_exit_clicked()
{
    this->close();//退出
}

void login::on_register_2_clicked()
{
    Register *reg = new Register;
    reg->show();
    this->hide();
    connect(reg,SIGNAL(back()),this,SLOT(showMain()));
}

void login::on_find_clicked()
{
    //跳转到找回密码界面
}
