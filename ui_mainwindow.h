/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *calendarButton;
    QPushButton *chartButton;
    QPushButton *return2;
    QPushButton *processButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1200, 650);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setStyleSheet(QLatin1String(" \n"
"background-image: url(:/new/prefix1/back6.jpg);\n"
" "));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        calendarButton = new QPushButton(centralwidget);
        calendarButton->setObjectName(QStringLiteral("calendarButton"));
        calendarButton->setMinimumSize(QSize(250, 80));
        calendarButton->setMaximumSize(QSize(250, 80));
        calendarButton->setStyleSheet(QString::fromUtf8("border-radius:14px;\n"
"font: 25 16pt \"\347\255\211\347\272\277 Light\";\n"
"background-image: url();\n"
"background-color: rgb(161, 238, 255);\n"
"font: 16pt \"Arial\";"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/rili.png"), QSize(), QIcon::Normal, QIcon::On);
        calendarButton->setIcon(icon);
        calendarButton->setIconSize(QSize(50, 50));

        gridLayout->addWidget(calendarButton, 0, 0, 1, 1);

        chartButton = new QPushButton(centralwidget);
        chartButton->setObjectName(QStringLiteral("chartButton"));
        chartButton->setMinimumSize(QSize(250, 80));
        chartButton->setMaximumSize(QSize(250, 80));
        chartButton->setStyleSheet(QLatin1String("border-radius:14px;\n"
"font: 16pt \"Arial\";\n"
"background-image: url();\n"
"background-color: rgb(161, 238, 255);\n"
""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/shijian.png"), QSize(), QIcon::Normal, QIcon::On);
        chartButton->setIcon(icon1);
        chartButton->setIconSize(QSize(50, 50));

        gridLayout->addWidget(chartButton, 1, 0, 1, 1);

        return2 = new QPushButton(centralwidget);
        return2->setObjectName(QStringLiteral("return2"));
        return2->setMinimumSize(QSize(250, 80));
        return2->setMaximumSize(QSize(250, 80));
        return2->setStyleSheet(QLatin1String("border-radius:14px;\n"
"font: 16pt \"Arial\";\n"
"background-image: url();\n"
"background-color: rgb(161, 238, 255);\n"
""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/shouye.png"), QSize(), QIcon::Normal, QIcon::On);
        return2->setIcon(icon2);
        return2->setIconSize(QSize(50, 50));

        gridLayout->addWidget(return2, 3, 0, 1, 1);

        processButton_3 = new QPushButton(centralwidget);
        processButton_3->setObjectName(QStringLiteral("processButton_3"));
        processButton_3->setMinimumSize(QSize(250, 80));
        processButton_3->setMaximumSize(QSize(250, 80));
        processButton_3->setStyleSheet(QLatin1String("border-radius:14px;\n"
"background-image: url();\n"
"background-color: rgb(161, 238, 255);\n"
"font: 16pt \"Arial\";"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/gengduo.png"), QSize(), QIcon::Normal, QIcon::On);
        processButton_3->setIcon(icon3);
        processButton_3->setIconSize(QSize(50, 50));

        gridLayout->addWidget(processButton_3, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        calendarButton->setText(QApplication::translate("MainWindow", "     \346\211\223\345\215\241\346\227\245\345\216\206", Q_NULLPTR));
        chartButton->setText(QApplication::translate("MainWindow", "     \346\227\266\351\225\277\347\273\237\350\256\241", Q_NULLPTR));
        return2->setText(QApplication::translate("MainWindow", "     \350\277\224\345\233\236", Q_NULLPTR));
        processButton_3->setText(QApplication::translate("MainWindow", "     \350\277\233\345\272\246\346\235\241", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
