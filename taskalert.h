#ifndef TASKALERT_H
#define TASKALERT_H

#include <QWidget>
#include <QTimer>

namespace Ui {
class TaskAlert;
}

class TaskAlert : public QWidget
{
    Q_OBJECT

public:
    explicit TaskAlert(QWidget *parent = nullptr);
    ~TaskAlert();
private slots:
    void showAlert();

public:
    void timerStart(long t);

private:
    Ui::TaskAlert *ui;
    QTimer *qTimer;

};

#endif // TASKALERT_H
