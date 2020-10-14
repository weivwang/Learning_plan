#include "task.h"
#include "ui_task.h"

extern QString myname;

Task::Task(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Task)
{
    ui->setupUi(this);
}

Task::~Task()
{
    delete ui;
}
