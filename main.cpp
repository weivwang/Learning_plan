//优化：Debug环境中将数据路径设置成环境变量（其实在Release环境中应该会是和程序同一个目录）
#include "login.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include "mainwindow.h"
#include "addtask.h"

QString myname;

int main(int argc, char *argv[])
{
    //创建数据库
    QSqlDatabase dbm = QSqlDatabase::addDatabase("QSQLITE");
    //数据库命名
    dbm.setDatabaseName("/Users/wangweiwei/Qt5.9.9/my_qt/my.db");
    //打开数据库
    if(dbm.open())
    {
        qDebug()<<"open database suc";
    }
    else
    {
        qDebug()<<"open database fail";
    }

    //创建一个存储用户名密码的数据库表
    QString cmd="create table if not exists userinfo (username varchar(64) unique, password varchar(64))";

    QSqlQuery query;
    if(query.exec(cmd))
    {
        qDebug()<<"exec suc";
    }
    QApplication a(argc, argv);
    login w;
    w.show();
    return a.exec();
}
