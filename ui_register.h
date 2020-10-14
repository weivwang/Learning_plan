/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

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

class Ui_Register
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *rUsername;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *rPassword;
    QHBoxLayout *horizontalLayout;
    QPushButton *rRegister_2;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *rExit;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *rePssword;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QStringLiteral("Register"));
        Register->resize(1200, 650);
        Register->setStyleSheet(QLatin1String("\n"
"\n"
"QLineEdit{\n"
"padding:1px;\n"
"border-style:solid;\n"
"border:2px solid gray;\n"
"border-radius:8px;\n"
"}\n"
"QPushButton{\n"
"color:white;\n"
"background-color:QLinearGradient(x1:0,y1:0,x2:0,y2:0,stop:0 #88d,stop:0.1 #99e,stop:0.49 #77c,stop:0.5 #66b,stop:1 #77c);\n"
"border-width:1px;\n"
"border_color:#339;\n"
"border_style:solid;\n"
"border_radius:7;\n"
"padding:3px;\n"
"font-size:13px;\n"
"padding-left:5px;\n"
"padding-right:5px;\n"
"min-width:50px;\n"
"max-width:50px;\n"
"min-height:15px;\n"
"max-height:15px;\n"
"}\n"
"QLabel{\n"
"font-weight:bold;\n"
"font-size:15px;\n"
"}"));
        centralwidget = new QWidget(Register);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setStyleSheet(QLatin1String("#centralwidget{\n"
"border-image:\n"
"url(:/pic/mountains-1412683_1280.png)}"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_4 = new QSpacerItem(20, 430, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 1, 0, 1, 1);

        rUsername = new QLineEdit(centralwidget);
        rUsername->setObjectName(QStringLiteral("rUsername"));
        rUsername->setMaximumSize(QSize(500, 16777215));

        gridLayout->addWidget(rUsername, 3, 3, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(331, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 3, 0, 1, 1);

        rPassword = new QLineEdit(centralwidget);
        rPassword->setObjectName(QStringLiteral("rPassword"));
        rPassword->setMaximumSize(QSize(500, 16777215));
        rPassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(rPassword, 4, 3, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        rRegister_2 = new QPushButton(centralwidget);
        rRegister_2->setObjectName(QStringLiteral("rRegister_2"));

        horizontalLayout->addWidget(rRegister_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        rExit = new QPushButton(centralwidget);
        rExit->setObjectName(QStringLiteral("rExit"));

        horizontalLayout->addWidget(rExit);


        gridLayout->addLayout(horizontalLayout, 7, 3, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 5, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 5, 2, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe \351\273\221\344\275\223 Std R"));
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color:rgb(255,255,255)"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 4, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(331, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 3, 5, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_10, 3, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 4, 2, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 252, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 1, 5, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(331, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 4, 5, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(331, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_11, 4, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color:rgb(255,255,255)"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 3, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 4, 1, 1);

        rePssword = new QLineEdit(centralwidget);
        rePssword->setObjectName(QStringLiteral("rePssword"));
        rePssword->setMaximumSize(QSize(500, 16777215));
        rePssword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(rePssword, 5, 3, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("color:rgb(255,255,255)"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 5, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 2, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 0, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 6, 3, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMaximumSize(QSize(500, 500));
        label_4->setStyleSheet(QStringLiteral("border-image: url(:/pic/whu2.png);"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 1, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 2, 1);

        Register->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Register);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 26));
        Register->setMenuBar(menubar);
        statusbar = new QStatusBar(Register);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Register->setStatusBar(statusbar);

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QMainWindow *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "MainWindow", Q_NULLPTR));
        rRegister_2->setText(QApplication::translate("Register", "\346\263\250\345\206\214", Q_NULLPTR));
        rExit->setText(QApplication::translate("Register", "\350\277\224\345\233\236", Q_NULLPTR));
        label_2->setText(QApplication::translate("Register", "\345\257\206\347\240\201", Q_NULLPTR));
        label->setText(QApplication::translate("Register", "\350\264\246\345\217\267", Q_NULLPTR));
        label_3->setText(QApplication::translate("Register", "\347\241\256\350\256\244\345\257\206\347\240\201", Q_NULLPTR));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
