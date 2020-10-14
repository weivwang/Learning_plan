#ifndef ADDTASK_H
#define ADDTASK_H

#include <QMainWindow>

namespace Ui {
class AddTask;
}

class AddTask : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddTask(QWidget *parent = nullptr);
    ~AddTask();


signals:
    void back();
    void add1(QString t);
    void remind();


private slots:
    void on_back_clicked();

    void on_add_clicked();



private:
    Ui::AddTask *ui;
};

#endif // ADDTASK_H
