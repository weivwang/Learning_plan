#include "calendarframe.h"
#include "ui_calendarframe.h"
#include <QtWidgets>
#include<QDebug>
#include<QMainWindow>
#include<QToolBar>
#include <QSqlQuery>
#include <QSqlTableModel>
#include<QString>
#include<QList>

extern QString myname;

CalendarFrame::CalendarFrame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CalendarFrame)
{
    ui->setupUi(this);

    init();
    Button1=new QPushButton(this);
    Button1->show();
    Button1->setText("返回");
    Button1->move(0,0);
    Button1->setStyleSheet("background-color:rgb(216,252,255)");

    Button2=new QPushButton(this);
    Button2->show();
    Button2->setText("标红日期已打卡");
    Button2->move(540,0);
    Button2->adjustSize();
    Button2->setStyleSheet("background-color:rgb(178,255,114)");
    this->checkTarget();
    connect(Button1,&QPushButton::clicked,this,&CalendarFrame:: returnTo);





}

CalendarFrame::~CalendarFrame()
{
    delete ui;
}

void CalendarFrame::setDateColor(const QDate &date, const QColor &color)
{
    QTextCharFormat format = m_wgtCalendar->dateTextFormat(date);
    format.setForeground(color);

    m_wgtCalendar->setDateTextFormat(date, format);
}






void CalendarFrame::setUnderline(const QDate &date, const QColor &color)
{
    QTextCharFormat format = m_wgtCalendar->dateTextFormat(date);
    format.setUnderlineColor(color);
    format.setFontUnderline(true);
    m_wgtCalendar->setDateTextFormat(date, format);
}

void CalendarFrame::showUnderLine(const QDate &date, bool isShow)
{
    QTextCharFormat format = m_wgtCalendar->dateTextFormat(date);
    format.setFontUnderline(isShow);

    m_wgtCalendar->setDateTextFormat(date, format);
}

void CalendarFrame::setChecked(const QDate &date) {
    QTextCharFormat format = m_wgtCalendar->dateTextFormat(date);
    //format.setFontItalic(true);
    format.setFontWeight(80);
     format.setFontStretch(100);
    // format.setFontStrikeOut(true);

    m_wgtCalendar->setDateTextFormat(date, format);
    setDateColor(date,QColor("red"));
}


void CalendarFrame::resetDateColor()
{
    QDate currDate = QDate::currentDate();
    QTextCharFormat format = m_wgtCalendar->dateTextFormat(currDate.addDays(1));
    format.setForeground(QColor("red"));
    m_wgtCalendar->setDateTextFormat(QDate(), format);	// 使用空的QDate()，可以设置所有日期颜色
    setUnderline(currDate, QColor("red"));
}

void CalendarFrame::timerEvent(QTimerEvent *event)
{
    Q_UNUSED(event)
    showUnderLine(QDate::currentDate().addDays(-1), false);
    setUnderline(QDate::currentDate(), QColor(255,255,255));

    if (event->timerId() == m_timerFirst){
        killTimer(m_timerFirst);
        startTimer(24*60*60*1000);
    }
}

void CalendarFrame::init()
{
    m_wgtCalendar = new QCalendarWidget(this);


    setFixedSize(650,700); // 禁止改变窗口大小


    m_wgtCalendar->setWeekdayTextFormat(Qt::Saturday,m_wgtCalendar->weekdayTextFormat(Qt::Monday));
    m_wgtCalendar->setWeekdayTextFormat(Qt::Sunday,m_wgtCalendar->weekdayTextFormat(Qt::Monday));

    m_wgtCalendar->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);


    m_wgtCalendar->setHorizontalHeaderFormat(QCalendarWidget::ShortDayNames);

    // 设置水平表头颜色
    QBrush b(QColor(0,0,255));
    QTextCharFormat format ;
    format.setBackground(b);
    format.setForeground(QColor("white"));
    QFont font;
    font.setWeight(20);
    font.setBold(true);
    format.setFont(font);
    m_wgtCalendar->setHeaderTextFormat(format);



    QVBoxLayout *layout = new QVBoxLayout;
    layout->setSpacing(0);
    layout->setMargin(0);
    layout->addWidget(m_wgtCalendar);

    setLayout(layout);
    setUnderline(QDate::currentDate(), QColor(255,255,255));
    startTimer(24*60*60*1000-QTime::currentTime().msecsSinceStartOfDay());




    //QCalendarWidget *pCalendarWidget = ui.dateEditBegin->calendarWidget();
    QTextCharFormat f =m_wgtCalendar->weekdayTextFormat(Qt::Monday);//获取周一字体格式
    f.setForeground( QBrush(QColor("#23edff")) );//替换字体颜色
    QTextCharFormat weekdays = f;
     m_wgtCalendar->setWeekdayTextFormat(Qt::Sunday,weekdays);//设置周日为新的字体格式

     m_wgtCalendar->setWeekdayTextFormat(Qt::Saturday,weekdays);//设置周六为新的字体格式

     m_wgtCalendar->setWeekdayTextFormat(Qt::Monday,weekdays);//设置周1为新的字体格式

     m_wgtCalendar->setWeekdayTextFormat(Qt::Tuesday,weekdays);//设置周2为新的字体格式

     m_wgtCalendar->setWeekdayTextFormat(Qt::Thursday,weekdays);//设置周4为新的字体格式

     m_wgtCalendar->setWeekdayTextFormat(Qt::Friday,weekdays);//设置周5为新的字体格式
     m_wgtCalendar->setWeekdayTextFormat(Qt::Wednesday,weekdays);//设置周3为新的字体格式



     //数据库需求：获得已经打卡的日期。
}

void CalendarFrame::returnTo() {
    emit back();
    this->hide();
}

void  CalendarFrame:: checkTarget(){
    QSqlDatabase db3 = QSqlDatabase::addDatabase("QSQLITE");
     db3.setDatabaseName("/Users/wangweiwei/Qt5.9.9/my_qt/" + myname + ".db");
     db3.open();


     QSqlQuery query(db3);
     QString select_sql="SELECT * FROM Mytask";

   if(!query.exec(select_sql)){
       qDebug()<<"failaa";
   }
   else{
         while(query.next()){
         QString  begintime=query.value(1).toString();
         QList<QString> lst;
         lst.clear();
         lst=begintime.split('/');

         int checkyear=lst[0].toInt();
         int checkmonth=lst[1].toInt();
         QString qday=lst[2];
          QList<QString> alst;
          alst.clear();
          alst=qday.split(' ');
          int checkday=alst[0].toInt();
            qDebug()<<"hhhh";
          this-> setChecked(QDate(checkyear,checkmonth,checkday));

          qDebug()<<begintime;

   }

   }





}

