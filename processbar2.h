#ifndef PROCESSBAR2_H
#define PROCESSBAR2_H

#include <QWidget>
#include <QProgressBar>
#include <QLabel>
#include <QGridLayout>
#include  <QPushButton>
QT_BEGIN_NAMESPACE
namespace Ui { class processbar2; }
QT_END_NAMESPACE

class processbar2 : public QWidget
{
    Q_OBJECT

public:
    processbar2(QWidget *parent = nullptr);
    ~processbar2();
    void returnTo();
private:
    QLabel *labProcess;
    QProgressBar *myProgressBar;
    QPushButton* myButton;
private:
    Ui::processbar2 *ui;

 signals:
   void back();
};
#endif // PROCESSBAR2_H
