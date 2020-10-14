/********************************************************************************
** Form generated from reading UI file 'attribute.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTRIBUTE_H
#define UI_ATTRIBUTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_attribute
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *arStartTime;
    QLineEdit *arPriority;
    QLineEdit *arTask;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *arReTime;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_3;
    QLineEdit *arEndTime;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *finish;
    QPushButton *change;
    QPushButton *Aback;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *attribute)
    {
        if (attribute->objectName().isEmpty())
            attribute->setObjectName(QStringLiteral("attribute"));
        attribute->resize(800, 600);
        attribute->setStyleSheet(QLatin1String("#attribute\n"
"{\n"
"border-image:\n"
"url(:/pic/rough-horn-2146181_1920.jpg)}\n"
"QLineEdit{\n"
"padding:1px;\n"
"border-style:solid;\n"
"border:2px solid gray;\n"
"border-radius:8px;\n"
"}\n"
"\n"
"QLabel{\n"
"font-weight:bold;\n"
"font-size:21px;\n"
"color:white;\n"
"}\n"
"QPushButton{\n"
"color:blue;\n"
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
"min-height:19px;\n"
"max-height:19px;\n"
"}\n"
""));
        centralwidget = new QWidget(attribute);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setStyleSheet(QLatin1String("#centralwidget{\n"
"border-image:\n"
"url(:/pic/rough-horn-2146181_1920.jpg)}"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 5, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 1, 0, 1, 1);

        arStartTime = new QLineEdit(centralwidget);
        arStartTime->setObjectName(QStringLiteral("arStartTime"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(arStartTime->sizePolicy().hasHeightForWidth());
        arStartTime->setSizePolicy(sizePolicy);

        gridLayout->addWidget(arStartTime, 2, 1, 1, 1);

        arPriority = new QLineEdit(centralwidget);
        arPriority->setObjectName(QStringLiteral("arPriority"));
        sizePolicy.setHeightForWidth(arPriority->sizePolicy().hasHeightForWidth());
        arPriority->setSizePolicy(sizePolicy);

        gridLayout->addWidget(arPriority, 6, 1, 1, 1);

        arTask = new QLineEdit(centralwidget);
        arTask->setObjectName(QStringLiteral("arTask"));
        sizePolicy.setHeightForWidth(arTask->sizePolicy().hasHeightForWidth());
        arTask->setSizePolicy(sizePolicy);

        gridLayout->addWidget(arTask, 0, 1, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("color:white"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        arReTime = new QLineEdit(centralwidget);
        arReTime->setObjectName(QStringLiteral("arReTime"));
        sizePolicy.setHeightForWidth(arReTime->sizePolicy().hasHeightForWidth());
        arReTime->setSizePolicy(sizePolicy);

        gridLayout->addWidget(arReTime, 8, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 3, 0, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        arEndTime = new QLineEdit(centralwidget);
        arEndTime->setObjectName(QStringLiteral("arEndTime"));
        sizePolicy.setHeightForWidth(arEndTime->sizePolicy().hasHeightForWidth());
        arEndTime->setSizePolicy(sizePolicy);

        gridLayout->addWidget(arEndTime, 4, 1, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 8, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 7, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        finish = new QPushButton(centralwidget);
        finish->setObjectName(QStringLiteral("finish"));
        finish->setStyleSheet(QStringLiteral("color:white"));

        horizontalLayout->addWidget(finish);

        change = new QPushButton(centralwidget);
        change->setObjectName(QStringLiteral("change"));
        change->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(change);

        Aback = new QPushButton(centralwidget);
        Aback->setObjectName(QStringLiteral("Aback"));
        Aback->setStyleSheet(QStringLiteral("color:white"));

        horizontalLayout->addWidget(Aback);


        gridLayout_2->addLayout(horizontalLayout, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 0, 0, 1, 1);

        attribute->setCentralWidget(centralwidget);
        menubar = new QMenuBar(attribute);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        attribute->setMenuBar(menubar);
        statusbar = new QStatusBar(attribute);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        attribute->setStatusBar(statusbar);

        retranslateUi(attribute);

        QMetaObject::connectSlotsByName(attribute);
    } // setupUi

    void retranslateUi(QMainWindow *attribute)
    {
        attribute->setWindowTitle(QApplication::translate("attribute", "MainWindow", Q_NULLPTR));
        label_2->setText(QApplication::translate("attribute", "\344\273\273\345\212\241\345\206\205\345\256\271", Q_NULLPTR));
        label->setText(QApplication::translate("attribute", "\345\274\200\345\247\213\346\227\266\351\227\264", Q_NULLPTR));
        label_4->setText(QApplication::translate("attribute", "\344\274\230\345\205\210\347\272\247", Q_NULLPTR));
        label_3->setText(QApplication::translate("attribute", "\347\273\223\346\235\237\346\227\266\351\227\264", Q_NULLPTR));
        label_5->setText(QApplication::translate("attribute", "\346\217\220\351\206\222\346\227\266\351\227\264", Q_NULLPTR));
        finish->setText(QApplication::translate("attribute", "\345\256\214\346\210\220\344\273\273\345\212\241", Q_NULLPTR));
        change->setText(QApplication::translate("attribute", "\344\277\256\346\224\271\344\273\273\345\212\241", Q_NULLPTR));
        Aback->setText(QApplication::translate("attribute", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class attribute: public Ui_attribute {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTRIBUTE_H
