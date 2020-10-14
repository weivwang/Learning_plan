#ifndef ATTRIBUTE_H
#define ATTRIBUTE_H

#include <QMainWindow>

namespace Ui {
class attribute;
}

class attribute : public QMainWindow
{
    Q_OBJECT

public:
    explicit attribute(QWidget *parent = nullptr);
    ~attribute();

signals:
    void back();

private slots:
    void on_Aback_clicked();
    void receive();


    void on_change_clicked();

    void on_finish_clicked();

private:
    Ui::attribute *ui;
};

#endif // ATTRIBUTE_H
