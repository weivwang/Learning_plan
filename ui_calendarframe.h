/********************************************************************************
** Form generated from reading UI file 'calendarframe.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALENDARFRAME_H
#define UI_CALENDARFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalendarFrame
{
public:

    void setupUi(QWidget *CalendarFrame)
    {
        if (CalendarFrame->objectName().isEmpty())
            CalendarFrame->setObjectName(QStringLiteral("CalendarFrame"));
        CalendarFrame->resize(687, 539);

        retranslateUi(CalendarFrame);

        QMetaObject::connectSlotsByName(CalendarFrame);
    } // setupUi

    void retranslateUi(QWidget *CalendarFrame)
    {
        CalendarFrame->setWindowTitle(QApplication::translate("CalendarFrame", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CalendarFrame: public Ui_CalendarFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALENDARFRAME_H
