#ifndef DYNAMIC_BUTTON_H
#define DYNAMIC_BUTTON_H

#include <QSignalMapper>

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Dynamic_button; }
QT_END_NAMESPACE

class Dynamic_button : public QMainWindow
{
    Q_OBJECT

public:
    Dynamic_button(QWidget *parent = nullptr);
    ~Dynamic_button();

signals:
    void back();

private slots:
    void on_addTask_clicked();
    void addButton(QString t);
    void showTask();



    void on_Dback_clicked();

private:
    Ui::Dynamic_button *ui;
    QSignalMapper * myMapper;
};
#endif // DYNAMIC_BUTTON_H
