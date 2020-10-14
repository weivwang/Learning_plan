/********************************************************************************
** Form generated from reading UI file 'taskalert.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKALERT_H
#define UI_TASKALERT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskAlert
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *TaskAlert)
    {
        if (TaskAlert->objectName().isEmpty())
            TaskAlert->setObjectName(QStringLiteral("TaskAlert"));
        TaskAlert->resize(452, 360);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TaskAlert->sizePolicy().hasHeightForWidth());
        TaskAlert->setSizePolicy(sizePolicy);
        TaskAlert->setStyleSheet(QLatin1String("\n"
"#TaskAlert{\n"
"\n"
"background-color:rgb(220,162,151);}\n"
"QLabel{\n"
"color:rgb(23,44,60);}\n"
""));
        label = new QLabel(TaskAlert);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 170, 211, 30));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(TaskAlert);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(200, 80, 68, 15));
        label_2->setStyleSheet(QStringLiteral(""));

        retranslateUi(TaskAlert);

        QMetaObject::connectSlotsByName(TaskAlert);
    } // setupUi

    void retranslateUi(QWidget *TaskAlert)
    {
        TaskAlert->setWindowTitle(QApplication::translate("TaskAlert", "\346\217\220\347\244\272", Q_NULLPTR));
        label->setText(QApplication::translate("TaskAlert", "\344\273\212\346\227\245\346\202\250\346\234\211\345\276\205\345\256\214\346\210\220\347\232\204\344\273\273\345\212\241\357\274\201", Q_NULLPTR));
        label_2->setText(QApplication::translate("TaskAlert", "\346\270\251\351\246\250\346\217\220\347\244\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TaskAlert: public Ui_TaskAlert {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKALERT_H
