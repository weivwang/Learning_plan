#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class login; }
QT_END_NAMESPACE

class login : public QMainWindow
{
    Q_OBJECT

public:
    login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_login_2_clicked();

    void on_exit_clicked();

    void on_register_2_clicked();

    void on_find_clicked();

    void showMain();

private:
    Ui::login *ui;
};
#endif // LOGIN_H
