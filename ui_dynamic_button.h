/********************************************************************************
** Form generated from reading UI file 'dynamic_button.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DYNAMIC_BUTTON_H
#define UI_DYNAMIC_BUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dynamic_button
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *addTask;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *Dback;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Dynamic_button)
    {
        if (Dynamic_button->objectName().isEmpty())
            Dynamic_button->setObjectName(QStringLiteral("Dynamic_button"));
        Dynamic_button->resize(800, 600);
        Dynamic_button->setStyleSheet(QLatin1String("#Dynamic_button{\n"
"border-image:\n"
"url(:/pic/volcanoes-691939_1920.jpg)}\n"
"QPushButton{\n"
"border-radius:14px;\n"
"background-color: rgb(255,255, 255);\n"
"min-width:254px;\n"
"max-width:254px;\n"
"min-height:45px;\n"
"max-height:45px;}\n"
""));
        centralwidget = new QWidget(Dynamic_button);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setStyleSheet(QLatin1String("#centralwidget{\n"
"border-image:\n"
"url(:/pic/volcanoes-691939_1920.jpg)}"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        addTask = new QPushButton(centralwidget);
        addTask->setObjectName(QStringLiteral("addTask"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addTask->sizePolicy().hasHeightForWidth());
        addTask->setSizePolicy(sizePolicy);
        addTask->setMaximumSize(QSize(254, 45));
        addTask->setStyleSheet(QLatin1String("border-radius:14px;\n"
"background-color: rgb(255,255, 255);"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/zengjia.png"), QSize(), QIcon::Normal, QIcon::Off);
        addTask->setIcon(icon);
        addTask->setIconSize(QSize(30, 30));

        verticalLayout->addWidget(addTask);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        Dback = new QPushButton(centralwidget);
        Dback->setObjectName(QStringLiteral("Dback"));
        sizePolicy.setHeightForWidth(Dback->sizePolicy().hasHeightForWidth());
        Dback->setSizePolicy(sizePolicy);
        Dback->setMinimumSize(QSize(254, 45));
        Dback->setStyleSheet(QLatin1String("border-radius:14px;\n"
"background-color: rgb(255,255, 255);"));

        gridLayout->addWidget(Dback, 1, 1, 1, 1);

        Dynamic_button->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Dynamic_button);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        Dynamic_button->setMenuBar(menubar);
        statusbar = new QStatusBar(Dynamic_button);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Dynamic_button->setStatusBar(statusbar);

        retranslateUi(Dynamic_button);

        QMetaObject::connectSlotsByName(Dynamic_button);
    } // setupUi

    void retranslateUi(QMainWindow *Dynamic_button)
    {
        Dynamic_button->setWindowTitle(QApplication::translate("Dynamic_button", "Dynamic_button", Q_NULLPTR));
        addTask->setText(QApplication::translate("Dynamic_button", "\346\267\273\345\212\240\344\273\273\345\212\241", Q_NULLPTR));
        Dback->setText(QApplication::translate("Dynamic_button", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dynamic_button: public Ui_Dynamic_button {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DYNAMIC_BUTTON_H
