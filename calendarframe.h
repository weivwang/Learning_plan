#ifndef CALENDARFRAME_H
#define CALENDARFRAME_H

#include <QWidget>
#include <QFrame>
#include <QDate>
#include<QPainter>
#include <QTimerEvent>
#include<QPushButton>
#include<QLabel>
#include  <QToolBar>
#include<QPixmap>
class QCalendarWidget;

namespace Ui {
class CalendarFrame;
}

class CalendarFrame : public QWidget
{
    Q_OBJECT

public:
    explicit CalendarFrame(QWidget *parent = nullptr);
    ~CalendarFrame();
    void setDateColor(const QDate &date, const QColor& color);	// 设置日期颜色
    void setUnderline(const QDate &date, const QColor& color);	// 设置下划线颜色
    void showUnderLine(const QDate &date, bool isShow);	// 设置是否显示下划线
    void resetDateColor();	// 重置日期颜色
    void on_button_clicked();
    void setBack(const QDate &date, const QPainter &painter);
    void setChecked(const QDate &date);
    void signalData(const QDate &date);
    void display(int number);
     void checkTarget();
private slots:
      void returnTo ();
     //void on_Button1_clicked();


signals:
    void back();

protected:
    void timerEvent(QTimerEvent *event);




private:
    Ui::CalendarFrame *ui;
    void init(void);
    QCalendarWidget *m_wgtCalendar;
    QDate m_date;
    int m_timerFirst;
    QPushButton* Button1;
    QPushButton* Button2;
    QLabel* Label1;
     QToolBar* toolBar;
    QBrush brush;

};

#endif // CALENDARFRAME_H
