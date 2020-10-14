#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "calendarframe.h"
#include"processbar2.h"
#include "QStackedLayout"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void display(int number);
    void back();

private slots:
    void on_calendarButton_clicked();


    void on_processButton_3_clicked();

    //void on_pushButton_2_clicked();



    void on_return2_clicked();

    void on_chartButton_clicked();

private:
    Ui::MainWindow *ui;



};
#endif // MAINWINDOW_H
