/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *btn_run;
    QPushButton *btn_word;
    QPushButton *btn_add;
    QLabel *label;
    QPushButton *btn_back_to_mainmenu;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(800, 600);
        btn_run = new QPushButton(Widget);
        btn_run->setObjectName(QStringLiteral("btn_run"));
        btn_run->setGeometry(QRect(270, 100, 191, 51));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_run->sizePolicy().hasHeightForWidth());
        btn_run->setSizePolicy(sizePolicy);
        btn_word = new QPushButton(Widget);
        btn_word->setObjectName(QStringLiteral("btn_word"));
        btn_word->setGeometry(QRect(270, 200, 191, 51));
        sizePolicy.setHeightForWidth(btn_word->sizePolicy().hasHeightForWidth());
        btn_word->setSizePolicy(sizePolicy);
        btn_add = new QPushButton(Widget);
        btn_add->setObjectName(QStringLiteral("btn_add"));
        btn_add->setGeometry(QRect(270, 290, 191, 51));
        sizePolicy.setHeightForWidth(btn_add->sizePolicy().hasHeightForWidth());
        btn_add->setSizePolicy(sizePolicy);
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(320, 50, 68, 15));
        btn_back_to_mainmenu = new QPushButton(Widget);
        btn_back_to_mainmenu->setObjectName(QStringLiteral("btn_back_to_mainmenu"));
        btn_back_to_mainmenu->setGeometry(QRect(300, 400, 121, 51));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        btn_run->setText(QApplication::translate("Widget", "\350\267\221\346\255\245 \346\211\223\345\215\2412\345\244\251", Q_NULLPTR));
        btn_word->setText(QApplication::translate("Widget", "\350\256\260\345\215\225\350\257\215 \346\211\223\345\215\2412\345\244\251", Q_NULLPTR));
        btn_add->setText(QApplication::translate("Widget", "+\346\267\273\345\212\240\346\233\264\345\244\232", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\344\273\273\345\212\241\345\210\227\350\241\250", Q_NULLPTR));
        btn_back_to_mainmenu->setText(QApplication::translate("Widget", "\350\277\224\345\233\236\344\270\273\350\217\234\345\215\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
