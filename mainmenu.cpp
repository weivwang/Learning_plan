#include "mainmenu.h"
#include "login.h"
#include "ui_mainmenu.h"
#include "mainwindow.h"
#include "dynamic_button.h"
#include "QDesktopWidget"

extern QString myname;

MainMenu::MainMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);
}

MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::showMain()
{
    this->show();
}

void MainMenu::on_exit_clicked()
{

    emit back();
    this->close();
}

void MainMenu::on_task_clicked()
{

    Dynamic_button *b = new Dynamic_button;
    b->show();
    connect(b,SIGNAL(back()),this,SLOT(show()));
    this->hide();

}


void MainMenu::on_clock_in_clicked()
{

    QDesktopWidget *pDesk = QApplication::desktop();
     // CVxMainWindow wd(pDesk);

    MainWindow *MW = new MainWindow(pDesk);//跳转到打卡界面


      MW->move((pDesk->width() - MW->width()) / 2, (pDesk->height() - MW->height()) / 2);

    MW->show();
    this->hide();
    connect(MW,SIGNAL(back()),this,SLOT(showMain()));
}
