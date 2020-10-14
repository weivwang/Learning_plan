/********************************************************************************
** Form generated from reading UI file 'tasklist.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKLIST_H
#define UI_TASKLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskList
{
public:

    void setupUi(QWidget *TaskList)
    {
        if (TaskList->objectName().isEmpty())
            TaskList->setObjectName(QStringLiteral("TaskList"));
        TaskList->resize(400, 300);

        retranslateUi(TaskList);

        QMetaObject::connectSlotsByName(TaskList);
    } // setupUi

    void retranslateUi(QWidget *TaskList)
    {
        TaskList->setWindowTitle(QApplication::translate("TaskList", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TaskList: public Ui_TaskList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKLIST_H
