#include "taskalert.h"
#include "ui_taskalert.h"

extern QString myname;

TaskAlert::TaskAlert(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TaskAlert)
{
    ui->setupUi(this);
    qTimer = new QTimer(this);
    qTimer->setSingleShot(true);
    connect(qTimer, SIGNAL(timeout()), this, SLOT(showAlert()));

}

TaskAlert::~TaskAlert()
{
    delete ui;
}


void TaskAlert::timerStart(long t){

    qTimer->start(t);
}

void TaskAlert::showAlert(){

    this->show();
    qTimer->stop();
}
