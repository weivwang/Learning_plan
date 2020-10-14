/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

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

class Ui_login
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *password;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_8;
    QLineEdit *username;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QPushButton *login_2;
    QPushButton *register_2;
    QPushButton *exit;
    QSpacerItem *verticalSpacer;
    QLabel *tubiao;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(1200, 650);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(login->sizePolicy().hasHeightForWidth());
        login->setSizePolicy(sizePolicy);
        login->setAutoFillBackground(false);
        login->setStyleSheet(QLatin1String("\n"
"QLineEdit{\n"
"padding:1px;\n"
"border-style:solid;\n"
"border:2px solid gray;\n"
"border-radius:8px;\n"
"}\n"
"\n"
"QLabel{\n"
"font-weight:bold;\n"
"font-size:15px;\n"
"}\n"
"QPushButton{\n"
"color:black;\n"
"background-color:QLinearGradient(x1:0,y1:0,x2:0,y2:0,stop:0 #88d,stop:0.1 #99e,stop:0.49 #77c,stop:0.5 #66b,stop:1 #77c);\n"
"border-width:1px;\n"
"border_color:#339;\n"
"border_style:solid;\n"
"border_radius:7;\n"
"padding:3px;\n"
"font-size:10px;\n"
"padding-left:5px;\n"
"padding-right:5px;\n"
"min-width:50px;\n"
"max-width:50px;\n"
"min-height:15px;\n"
"max-height:15px;\n"
"}\n"
""));
        centralwidget = new QWidget(login);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setAutoFillBackground(false);
        centralwidget->setStyleSheet(QLatin1String("#centralwidget{\n"
"border-image:\n"
"url(:/pic/back6.jpg)}"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 4, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 1, 6, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 4, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 3, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 4, 6, 1, 1);

        password = new QLineEdit(centralwidget);
        password->setObjectName(QStringLiteral("password"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(password->sizePolicy().hasHeightForWidth());
        password->setSizePolicy(sizePolicy1);
        password->setMaximumSize(QSize(500, 500));
        password->setAutoFillBackground(false);
        password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(password, 4, 3, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe \351\273\221\344\275\223 Std R"));
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("border-width: 1px;border-style: flat;\n"
"border-color: rgb(255, 255, 255);\n"
"color:rgb(255,255,255);"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 4, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 5, 3, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 4, 5, 1, 1);

        username = new QLineEdit(centralwidget);
        username->setObjectName(QStringLiteral("username"));
        username->setMaximumSize(QSize(500, 500));

        gridLayout->addWidget(username, 3, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);
        label->setStyleSheet(QLatin1String("border-width: 1px;border-style: flat;\n"
"border-color: rgb(255, 255, 255);\n"
"color:rgb(255,255,255);"));
        label->setFrameShape(QFrame::Box);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 3, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 6, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 1, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 3, 5, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_5, 0, 3, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        login_2 = new QPushButton(centralwidget);
        login_2->setObjectName(QStringLiteral("login_2"));
        login_2->setMinimumSize(QSize(60, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        login_2->setFont(font1);
        login_2->setStyleSheet(QLatin1String("border-radius:14px;\n"
"font: 11pt \"Arial\";\n"
"background-color: rgb(244, 255, 254);"));

        horizontalLayout->addWidget(login_2);

        register_2 = new QPushButton(centralwidget);
        register_2->setObjectName(QStringLiteral("register_2"));
        register_2->setMinimumSize(QSize(60, 21));
        register_2->setFont(font1);
        register_2->setStyleSheet(QLatin1String("border-radius:14px;\n"
"font: 11pt \"Arial\";\n"
"background-color: rgb(244, 255, 254);"));

        horizontalLayout->addWidget(register_2);

        exit = new QPushButton(centralwidget);
        exit->setObjectName(QStringLiteral("exit"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(exit->sizePolicy().hasHeightForWidth());
        exit->setSizePolicy(sizePolicy2);
        exit->setMinimumSize(QSize(60, 21));
        exit->setFont(font1);
        exit->setStyleSheet(QLatin1String("border-radius:14px;\n"
"font: 11pt \"Arial\";\n"
"background-color: rgb(244, 255, 254);"));

        horizontalLayout->addWidget(exit);


        gridLayout->addLayout(horizontalLayout, 6, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 2, 3, 1, 1);

        tubiao = new QLabel(centralwidget);
        tubiao->setObjectName(QStringLiteral("tubiao"));
        tubiao->setMinimumSize(QSize(280, 280));
        tubiao->setMaximumSize(QSize(280, 280));
        tubiao->setStyleSheet(QLatin1String("  \n"
"border-image: url(:/whu2.png);"));
        tubiao->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(tubiao, 1, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(login);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 26));
        login->setMenuBar(menubar);
        statusbar = new QStatusBar(login);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        login->setStatusBar(statusbar);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QApplication::translate("login", "login", Q_NULLPTR));
        label_2->setText(QApplication::translate("login", "\345\257\206\347\240\201", Q_NULLPTR));
        label->setText(QApplication::translate("login", "\350\264\246\345\217\267", Q_NULLPTR));
        login_2->setText(QApplication::translate("login", "\347\231\273\345\275\225", Q_NULLPTR));
        register_2->setText(QApplication::translate("login", "\346\263\250\345\206\214", Q_NULLPTR));
        exit->setText(QApplication::translate("login", "\351\200\200\345\207\272", Q_NULLPTR));
        tubiao->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
