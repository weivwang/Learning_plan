#ifndef TASK_H
#define TASK_H

#include <QMainWindow>

namespace Ui {
class Task;
}

class Task : public QMainWindow
{
    Q_OBJECT

public:
    explicit Task(QWidget *parent = nullptr);
    ~Task();

private:
    Ui::Task *ui;
};

#endif // TASK_H
