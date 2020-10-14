#ifndef QTCHARTS2_H
#define QTCHARTS2_H

#include <QWidget>
#include <QPushButton>
#include <QtCharts>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>

using namespace QtCharts;

QT_BEGIN_NAMESPACE

using namespace QtCharts;

namespace Ui { class Qtcharts2; }
QT_END_NAMESPACE

class Qtcharts2 : public QWidget
{
    Q_OBJECT

public:
    Qtcharts2(QWidget *parent = nullptr);
    ~Qtcharts2();
    void returnTo();
private:
    QPieSeries *series;
    QPushButton *returnTo_LastPage;
    QChart *chart;

private:
    Ui::Qtcharts2 *ui;
  signals:
    void back();
};
#endif // QTCHARTS2_H
