/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

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

class Ui_MainMenu
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *exit;
    QSpacerItem *horizontalSpacer;
    QPushButton *task;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *clock_in;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName(QStringLiteral("MainMenu"));
        MainMenu->resize(1200, 650);
        MainMenu->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(MainMenu);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setStyleSheet(QLatin1String("#centralwidget{\n"
"border-image:\n"
"url(:/pic/benjamin-voros-phIFdC6lA4E-unsplash.jpg)}"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_3 = new QSpacerItem(397, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 8, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        exit = new QPushButton(centralwidget);
        exit->setObjectName(QStringLiteral("exit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(exit->sizePolicy().hasHeightForWidth());
        exit->setSizePolicy(sizePolicy);
        exit->setMaximumSize(QSize(300, 100));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(14);
        exit->setFont(font);
        exit->setLayoutDirection(Qt::LeftToRight);
        exit->setStyleSheet(QLatin1String("border-radius:14px;\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(exit);


        gridLayout->addLayout(horizontalLayout_2, 6, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(397, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        task = new QPushButton(centralwidget);
        task->setObjectName(QStringLiteral("task"));
        sizePolicy.setHeightForWidth(task->sizePolicy().hasHeightForWidth());
        task->setSizePolicy(sizePolicy);
        task->setMaximumSize(QSize(700, 200));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Adobe \351\273\221\344\275\223 Std R"));
        font1.setPointSize(14);
        task->setFont(font1);
        task->setStyleSheet(QLatin1String("border-radius:14px;\n"
"background-color: rgb(255, 255,255);"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/rili.png"), QSize(), QIcon::Normal, QIcon::Off);
        task->setIcon(icon);
        task->setIconSize(QSize(70, 70));
        task->setFlat(false);

        gridLayout->addWidget(task, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(397, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(397, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 4, 2, 1, 1);

        clock_in = new QPushButton(centralwidget);
        clock_in->setObjectName(QStringLiteral("clock_in"));
        sizePolicy.setHeightForWidth(clock_in->sizePolicy().hasHeightForWidth());
        clock_in->setSizePolicy(sizePolicy);
        clock_in->setMaximumSize(QSize(700, 200));
        clock_in->setFont(font1);
        clock_in->setStyleSheet(QLatin1String("border-radius:14px;\n"
"background-color: rgb(255,255, 255);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/chenggong.png"), QSize(), QIcon::Normal, QIcon::Off);
        clock_in->setIcon(icon1);
        clock_in->setIconSize(QSize(70, 70));

        gridLayout->addWidget(clock_in, 4, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 5, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 3, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 0, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 7, 1, 1, 1);

        MainMenu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainMenu);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 26));
        MainMenu->setMenuBar(menubar);
        statusbar = new QStatusBar(MainMenu);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainMenu->setStatusBar(statusbar);

        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QMainWindow *MainMenu)
    {
        MainMenu->setWindowTitle(QApplication::translate("MainMenu", "MainWindow", Q_NULLPTR));
        exit->setText(QApplication::translate("MainMenu", "\350\277\224\345\233\236", Q_NULLPTR));
        task->setText(QApplication::translate("MainMenu", "\344\273\273\345\212\241", Q_NULLPTR));
        clock_in->setText(QApplication::translate("MainMenu", "\346\211\223\345\215\241", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
