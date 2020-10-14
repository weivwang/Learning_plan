/********************************************************************************
** Form generated from reading UI file 'dialog_run.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_RUN_H
#define UI_DIALOG_RUN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_run
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QPushButton *btn_back2;
    QPushButton *btn_save2;

    void setupUi(QDialog *Dialog_run)
    {
        if (Dialog_run->objectName().isEmpty())
            Dialog_run->setObjectName(QStringLiteral("Dialog_run"));
        Dialog_run->resize(521, 418);
        label = new QLabel(Dialog_run);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 80, 68, 15));
        label_2 = new QLabel(Dialog_run);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 140, 91, 16));
        label_3 = new QLabel(Dialog_run);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 190, 91, 16));
        lineEdit = new QLineEdit(Dialog_run);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(210, 140, 113, 21));
        lineEdit_2 = new QLineEdit(Dialog_run);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(220, 190, 113, 21));
        label_4 = new QLabel(Dialog_run);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 250, 68, 15));
        lineEdit_3 = new QLineEdit(Dialog_run);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(210, 250, 113, 21));
        btn_back2 = new QPushButton(Dialog_run);
        btn_back2->setObjectName(QStringLiteral("btn_back2"));
        btn_back2->setGeometry(QRect(250, 310, 93, 28));
        btn_save2 = new QPushButton(Dialog_run);
        btn_save2->setObjectName(QStringLiteral("btn_save2"));
        btn_save2->setGeometry(QRect(120, 310, 93, 28));

        retranslateUi(Dialog_run);

        QMetaObject::connectSlotsByName(Dialog_run);
    } // setupUi

    void retranslateUi(QDialog *Dialog_run)
    {
        Dialog_run->setWindowTitle(QApplication::translate("Dialog_run", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog_run", "\350\267\221\346\255\245", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog_run", "\345\267\262\346\211\223\345\215\241\345\244\251\346\225\260", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog_run", "\350\277\236\347\273\255\346\211\223\345\215\241\345\244\251\346\225\260", Q_NULLPTR));
        label_4->setText(QApplication::translate("Dialog_run", "\346\227\266\351\225\277", Q_NULLPTR));
        btn_back2->setText(QApplication::translate("Dialog_run", "\350\277\224\345\233\236", Q_NULLPTR));
        btn_save2->setText(QApplication::translate("Dialog_run", "\344\277\235\345\255\230", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog_run: public Ui_Dialog_run {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_RUN_H
