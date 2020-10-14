/********************************************************************************
** Form generated from reading UI file 'form1.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM1_H
#define UI_FORM1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form1
{
public:
    QToolButton *btn_run;
    QToolButton *btn_word;
    QToolButton *btn_add;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *Tback;

    void setupUi(QWidget *Form1)
    {
        if (Form1->objectName().isEmpty())
            Form1->setObjectName(QStringLiteral("Form1"));
        Form1->resize(615, 452);
        Form1->setStyleSheet(QLatin1String("#Form1{\n"
"border-image:\n"
"url(:/picture/5c9d8e9202b0c.jpg)}"));
        btn_run = new QToolButton(Form1);
        btn_run->setObjectName(QStringLiteral("btn_run"));
        btn_run->setGeometry(QRect(220, 120, 151, 41));
        btn_run->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        btn_run->setArrowType(Qt::NoArrow);
        btn_word = new QToolButton(Form1);
        btn_word->setObjectName(QStringLiteral("btn_word"));
        btn_word->setGeometry(QRect(220, 200, 151, 41));
        btn_word->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        btn_word->setArrowType(Qt::NoArrow);
        btn_add = new QToolButton(Form1);
        btn_add->setObjectName(QStringLiteral("btn_add"));
        btn_add->setGeometry(QRect(220, 270, 151, 41));
        btn_add->setMinimumSize(QSize(0, 0));
        btn_add->setToolTipDuration(-1);
        btn_add->setAutoFillBackground(false);
        btn_add->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        btn_add->setAutoRaise(false);
        btn_add->setArrowType(Qt::NoArrow);
        widget = new QWidget(Form1);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 30, 493, 41));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_7 = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_8 = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        Tback = new QPushButton(Form1);
        Tback->setObjectName(QStringLiteral("Tback"));
        Tback->setGeometry(QRect(250, 350, 93, 28));

        retranslateUi(Form1);

        QMetaObject::connectSlotsByName(Form1);
    } // setupUi

    void retranslateUi(QWidget *Form1)
    {
        Form1->setWindowTitle(QApplication::translate("Form1", "\345\255\246\344\271\240\345\205\273\346\210\220\350\256\241\345\210\222", Q_NULLPTR));
        btn_run->setText(QApplication::translate("Form1", "\350\267\221\346\255\245 \346\211\223\345\215\241\344\270\244\345\244\251", Q_NULLPTR));
        btn_word->setText(QApplication::translate("Form1", "\350\256\260\345\215\225\350\257\215 \346\211\223\345\215\241\344\270\244\345\244\251", Q_NULLPTR));
        btn_add->setText(QApplication::translate("Form1", "+\346\267\273\345\212\240\346\233\264\345\244\232", Q_NULLPTR));
        label->setText(QApplication::translate("Form1", "\344\271\240\346\203\257\347\256\241\347\220\206", Q_NULLPTR));
        Tback->setText(QApplication::translate("Form1", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Form1: public Ui_Form1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM1_H
