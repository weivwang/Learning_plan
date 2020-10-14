/********************************************************************************
** Form generated from reading UI file 'processbar2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESSBAR2_H
#define UI_PROCESSBAR2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_processbar2
{
public:

    void setupUi(QWidget *processbar2)
    {
        if (processbar2->objectName().isEmpty())
            processbar2->setObjectName(QStringLiteral("processbar2"));
        processbar2->resize(1200, 650);
        processbar2->setStyleSheet(QStringLiteral(""));

        retranslateUi(processbar2);

        QMetaObject::connectSlotsByName(processbar2);
    } // setupUi

    void retranslateUi(QWidget *processbar2)
    {
        processbar2->setWindowTitle(QApplication::translate("processbar2", "processbar2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class processbar2: public Ui_processbar2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESSBAR2_H
