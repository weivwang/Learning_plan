/********************************************************************************
** Form generated from reading UI file 'addtask.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTASK_H
#define UI_ADDTASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddTask
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *add;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *back;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_2;
    QLineEdit *task;
    QDateTimeEdit *startTime;
    QDateTimeEdit *remainTime;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *priority;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_5;
    QLabel *label;
    QDateTimeEdit *endTime;
    QSpacerItem *verticalSpacer_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AddTask)
    {
        if (AddTask->objectName().isEmpty())
            AddTask->setObjectName(QStringLiteral("AddTask"));
        AddTask->resize(900, 650);
        AddTask->setStyleSheet(QLatin1String("QLineEdit{\n"
"padding:1px;\n"
"border-style:solid;\n"
"border:2px solid gray;\n"
"border-radius:8px;\n"
"min-height:24px;\n"
"max-height:24px;\n"
"\n"
"}\n"
"\n"
"QLabel{\n"
"font-weight:bold;\n"
"font-size:20px;\n"
"color:white;\n"
"}\n"
"QPushButton{\n"
"color:white;\n"
"background-color:QLinearGradient(x1:0,y1:0,x2:0,y2:0,stop:0 #88d,stop:0.1 #99e,stop:0.49 #77c,stop:0.5 #66b,stop:1 #77c);\n"
"border-width:1px;\n"
"border_color:#339;\n"
"border_style:solid;\n"
"border_radius:7;\n"
"padding:3px;\n"
"font-size:15px;\n"
"padding-left:5px;\n"
"padding-right:5px;\n"
"min-width:60px;\n"
"max-width:60px;\n"
"min-height:18px;\n"
"max-height:18px;\n"
"}\n"
"QDateTimeEdit{\n"
"padding:1px;\n"
"border-style:solid;\n"
"border:2px solid gray;\n"
"border-radius:8px;\n"
"min-height:24px;\n"
"max-height:24px;\n"
"}\n"
"QSpinBox\n"
"{\n"
"padding:1px;\n"
"border-style:solid;\n"
"border:2px solid gray;\n"
"border-radius:8px;\n"
"min-height:24px;\n"
"max-height:24px;\n"
"}"));
        centralwidget = new QWidget(AddTask);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setStyleSheet(QLatin1String("#centralwidget{\n"
"border-image:\n"
"url(:/pic/mountain-846062_1920.jpg)}"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        add = new QPushButton(centralwidget);
        add->setObjectName(QStringLiteral("add"));

        horizontalLayout->addWidget(add);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        back = new QPushButton(centralwidget);
        back->setObjectName(QStringLiteral("back"));

        horizontalLayout->addWidget(back);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout, 3, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 4, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 1, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 3, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_4, 5, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        task = new QLineEdit(centralwidget);
        task->setObjectName(QStringLiteral("task"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(task->sizePolicy().hasHeightForWidth());
        task->setSizePolicy(sizePolicy);

        gridLayout->addWidget(task, 0, 1, 1, 1);

        startTime = new QDateTimeEdit(centralwidget);
        startTime->setObjectName(QStringLiteral("startTime"));
        startTime->setCurrentSection(QDateTimeEdit::YearSection);
        startTime->setTimeSpec(Qt::LocalTime);

        gridLayout->addWidget(startTime, 2, 1, 1, 1);

        remainTime = new QDateTimeEdit(centralwidget);
        remainTime->setObjectName(QStringLiteral("remainTime"));

        gridLayout->addWidget(remainTime, 8, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        priority = new QSpinBox(centralwidget);
        priority->setObjectName(QStringLiteral("priority"));
        priority->setMaximum(5);

        horizontalLayout_2->addWidget(priority);


        gridLayout->addLayout(horizontalLayout_2, 6, 1, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 8, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_5, 7, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        endTime = new QDateTimeEdit(centralwidget);
        endTime->setObjectName(QStringLiteral("endTime"));

        gridLayout->addWidget(endTime, 4, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_6, 2, 0, 1, 1);

        AddTask->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AddTask);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 900, 26));
        AddTask->setMenuBar(menubar);
        statusbar = new QStatusBar(AddTask);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        AddTask->setStatusBar(statusbar);

        retranslateUi(AddTask);

        QMetaObject::connectSlotsByName(AddTask);
    } // setupUi

    void retranslateUi(QMainWindow *AddTask)
    {
        AddTask->setWindowTitle(QApplication::translate("AddTask", "MainWindow", Q_NULLPTR));
        add->setText(QApplication::translate("AddTask", "\346\267\273\345\212\240\344\273\273\345\212\241", Q_NULLPTR));
        back->setText(QApplication::translate("AddTask", "\350\277\224\345\233\236", Q_NULLPTR));
        label_3->setText(QApplication::translate("AddTask", "\344\273\273\345\212\241\344\274\230\345\205\210\347\272\247", Q_NULLPTR));
        label_5->setText(QApplication::translate("AddTask", "\347\273\223\346\235\237\346\227\266\351\227\264", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddTask", "\345\274\200\345\247\213\346\227\266\351\227\264", Q_NULLPTR));
        label_4->setText(QApplication::translate("AddTask", "\346\217\220\351\206\222\346\227\266\351\227\264", Q_NULLPTR));
        label->setText(QApplication::translate("AddTask", "\344\273\273\345\212\241\344\270\273\351\242\230", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddTask: public Ui_AddTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTASK_H
