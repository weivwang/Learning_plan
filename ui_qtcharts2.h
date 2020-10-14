/********************************************************************************
** Form generated from reading UI file 'qtcharts2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTCHARTS2_H
#define UI_QTCHARTS2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Qtcharts2
{
public:

    void setupUi(QWidget *Qtcharts2)
    {
        if (Qtcharts2->objectName().isEmpty())
            Qtcharts2->setObjectName(QStringLiteral("Qtcharts2"));
        Qtcharts2->resize(1200, 650);
        Qtcharts2->setStyleSheet(QStringLiteral(""));

        retranslateUi(Qtcharts2);

        QMetaObject::connectSlotsByName(Qtcharts2);
    } // setupUi

    void retranslateUi(QWidget *Qtcharts2)
    {
        Qtcharts2->setWindowTitle(QApplication::translate("Qtcharts2", "Qtcharts2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Qtcharts2: public Ui_Qtcharts2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTCHARTS2_H
