/********************************************************************************
** Form generated from reading UI file 'task.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK_H
#define UI_TASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Task
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Tback;
    QPushButton *addTask;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Task)
    {
        if (Task->objectName().isEmpty())
            Task->setObjectName(QStringLiteral("Task"));
        Task->resize(1231, 678);
        Task->setStyleSheet(QStringLiteral("#Task{border-image: url(:/pic/galaxy-3608029_1920.jpg);}"));
        centralwidget = new QWidget(Task);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setStyleSheet(QLatin1String("#centralwidget{\n"
"border-image:\n"
"url(:/pic/galaxy-3608029_1920.jpg)}"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 3, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        Tback = new QPushButton(centralwidget);
        Tback->setObjectName(QStringLiteral("Tback"));
        Tback->setMaximumSize(QSize(200, 100));
        Tback->setStyleSheet(QLatin1String("border-radius:14px;\n"
"background-color: rgb(169, 169, 169);"));

        horizontalLayout_2->addWidget(Tback);


        gridLayout->addLayout(horizontalLayout_2, 4, 2, 1, 1);

        addTask = new QPushButton(centralwidget);
        addTask->setObjectName(QStringLiteral("addTask"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addTask->sizePolicy().hasHeightForWidth());
        addTask->setSizePolicy(sizePolicy);
        addTask->setMaximumSize(QSize(500, 16777215));
        addTask->setStyleSheet(QLatin1String("border-radius:14px;\n"
"background-color: rgb(169, 169, 169);"));

        gridLayout->addWidget(addTask, 2, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 4, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 2, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        Task->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Task);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1231, 26));
        Task->setMenuBar(menubar);
        statusbar = new QStatusBar(Task);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Task->setStatusBar(statusbar);

        retranslateUi(Task);

        QMetaObject::connectSlotsByName(Task);
    } // setupUi

    void retranslateUi(QMainWindow *Task)
    {
        Task->setWindowTitle(QApplication::translate("Task", "MainWindow", Q_NULLPTR));
        Tback->setText(QApplication::translate("Task", "\350\277\224\345\233\236", Q_NULLPTR));
        addTask->setText(QApplication::translate("Task", "\346\267\273\345\212\240\344\273\273\345\212\241", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Task: public Ui_Task {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK_H
