/********************************************************************************
** Form generated from reading UI file 'form3.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM3_H
#define UI_FORM3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form3
{
public:
    QWidget *widget_4;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_delete2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_back2;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_8;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label;
    QSpacerItem *horizontalSpacer_9;

    void setupUi(QWidget *Form3)
    {
        if (Form3->objectName().isEmpty())
            Form3->setObjectName(QStringLiteral("Form3"));
        Form3->resize(573, 528);
        Form3->setAcceptDrops(false);
        Form3->setStyleSheet(QLatin1String("#Form3\n"
"{border-image:\n"
"url(:/picture/-199591063519569008.jpg)}"));
        widget_4 = new QWidget(Form3);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(140, 210, 303, 181));
        verticalLayout = new QVBoxLayout(widget_4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(widget_4);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addWidget(widget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        widget_2 = new QWidget(widget_4);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        lineEdit_2 = new QLineEdit(widget_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addWidget(widget_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        widget_3 = new QWidget(widget_4);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        btn_delete2 = new QPushButton(widget_3);
        btn_delete2->setObjectName(QStringLiteral("btn_delete2"));

        horizontalLayout_3->addWidget(btn_delete2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        btn_back2 = new QPushButton(widget_3);
        btn_back2->setObjectName(QStringLiteral("btn_back2"));

        horizontalLayout_3->addWidget(btn_back2);


        verticalLayout->addWidget(widget_3);

        widget_5 = new QWidget(Form3);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setGeometry(QRect(94, 20, 241, 38));
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_8 = new QSpacerItem(100, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        widget_6 = new QWidget(Form3);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setGeometry(QRect(150, 110, 278, 41));
        horizontalLayout_5 = new QHBoxLayout(widget_6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_7 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        label = new QLabel(widget_6);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        horizontalSpacer_9 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);


        retranslateUi(Form3);

        QMetaObject::connectSlotsByName(Form3);
    } // setupUi

    void retranslateUi(QWidget *Form3)
    {
        Form3->setWindowTitle(QApplication::translate("Form3", "\350\256\260\345\215\225\350\257\215", Q_NULLPTR));
        label_2->setText(QApplication::translate("Form3", "\345\267\262\346\211\223\345\215\241\345\244\251\346\225\260", Q_NULLPTR));
        label_3->setText(QApplication::translate("Form3", "\350\277\236\347\273\255\346\211\223\345\215\241\345\244\251\346\225\260", Q_NULLPTR));
        btn_delete2->setText(QApplication::translate("Form3", "\345\210\240\351\231\244\344\273\273\345\212\241", Q_NULLPTR));
        btn_back2->setText(QApplication::translate("Form3", "\350\277\224\345\233\236", Q_NULLPTR));
        label->setText(QApplication::translate("Form3", "\350\256\260\345\215\225\350\257\215", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Form3: public Ui_Form3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM3_H
