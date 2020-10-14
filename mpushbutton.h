#ifndef MPUSHBUTTON_H
#define MPUSHBUTTON_H

#include <QObject>
#include <QWidget>
#include <QPushButton>

class mPushbutton : public QPushButton
{
    Q_OBJECT
public:
    mPushbutton(QWidget *parent = NULL) : QPushButton(parent)
    {
        connect(this,SIGNAL(clicked()),this,SLOT(on_mPushbutton_clicked()));
    }

signals:
    void add();

public slots:
    void on_mPushbutton_clicked();
};

#endif // MPUSHBUTTON_H
