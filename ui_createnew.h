/********************************************************************************
** Form generated from reading UI file 'createnew.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATENEW_H
#define UI_CREATENEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_createNew
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QLabel *label_6;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QPushButton *btn_save;
    QPushButton *btn_back1;

    void setupUi(QWidget *createNew)
    {
        if (createNew->objectName().isEmpty())
            createNew->setObjectName(QStringLiteral("createNew"));
        createNew->resize(675, 492);
        label = new QLabel(createNew);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(290, 60, 71, 16));
        label_2 = new QLabel(createNew);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(250, 110, 68, 15));
        label_3 = new QLabel(createNew);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 160, 68, 15));
        lineEdit = new QLineEdit(createNew);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(200, 160, 113, 21));
        label_4 = new QLabel(createNew);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 230, 68, 15));
        radioButton = new QRadioButton(createNew);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(200, 230, 110, 19));
        radioButton_2 = new QRadioButton(createNew);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(310, 230, 110, 19));
        label_5 = new QLabel(createNew);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(200, 280, 101, 16));
        lineEdit_2 = new QLineEdit(createNew);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(320, 280, 113, 21));
        label_6 = new QLabel(createNew);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(90, 330, 68, 15));
        radioButton_3 = new QRadioButton(createNew);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(180, 330, 110, 19));
        radioButton_4 = new QRadioButton(createNew);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(240, 330, 110, 19));
        radioButton_5 = new QRadioButton(createNew);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(310, 330, 110, 19));
        btn_save = new QPushButton(createNew);
        btn_save->setObjectName(QStringLiteral("btn_save"));
        btn_save->setGeometry(QRect(90, 390, 93, 28));
        btn_back1 = new QPushButton(createNew);
        btn_back1->setObjectName(QStringLiteral("btn_back1"));
        btn_back1->setGeometry(QRect(250, 390, 93, 28));

        retranslateUi(createNew);

        QMetaObject::connectSlotsByName(createNew);
    } // setupUi

    void retranslateUi(QWidget *createNew)
    {
        createNew->setWindowTitle(QApplication::translate("createNew", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("createNew", "\350\207\252\345\256\232\344\271\211", Q_NULLPTR));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("createNew", "\344\270\273\351\242\230\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("createNew", "\346\227\266\351\225\277\357\274\232", Q_NULLPTR));
        radioButton->setText(QApplication::translate("createNew", "30\345\210\206\351\222\237", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("createNew", "60\345\210\206\351\222\237", Q_NULLPTR));
        label_5->setText(QApplication::translate("createNew", "\350\207\252\345\256\232\344\271\211\346\227\266\351\225\277\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("createNew", "\344\274\230\345\205\210\347\272\247\357\274\232", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("createNew", "\351\253\230", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("createNew", "\344\270\255", Q_NULLPTR));
        radioButton_5->setText(QApplication::translate("createNew", "\344\275\216", Q_NULLPTR));
        btn_save->setText(QApplication::translate("createNew", "\344\277\235\345\255\230", Q_NULLPTR));
        btn_back1->setText(QApplication::translate("createNew", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class createNew: public Ui_createNew {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATENEW_H
