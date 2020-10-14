#ifndef MAINMENU_H
#define MAINMENU_H

#include <QMainWindow>
#include <calendarframe.h>
namespace Ui {
class MainMenu;
}

class MainMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *parent = nullptr);
    ~MainMenu();

signals:
    void back();

private slots:
    void on_exit_clicked();

    void on_task_clicked();

    void on_clock_in_clicked();

    void showMain();

private:
    Ui::MainMenu *ui;
};

#endif // MAINMENU_H
