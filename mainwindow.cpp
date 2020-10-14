#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"calendarframe.h"
#include "processbar2.h"
#include "qtcharts2.h"

extern QString myname;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_calendarButton_clicked()
{
     CalendarFrame* calendar=new CalendarFrame;
     calendar->show();
     this->hide();
     connect(calendar,&CalendarFrame::back,this,&MainWindow::show);
}



void MainWindow::on_processButton_3_clicked()
{
  processbar2 * processbar=new processbar2;
  processbar->show();
  this->hide();
  connect(processbar,&processbar2::back,this,&MainWindow::show);
}

void MainWindow::on_return2_clicked()
{
    emit back();
    this->hide();
}





void MainWindow::on_chartButton_clicked()
{
   Qtcharts2* chart=new Qtcharts2;
   chart->show();
   this->hide();
   connect(chart, &Qtcharts2::back,this,&MainWindow::show);
}
