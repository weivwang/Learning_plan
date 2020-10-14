/********************************************************************************
** Form generated from reading UI file 'dialog_word.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_WORD_H
#define UI_DIALOG_WORD_H

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

class Ui_dialog_word
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QPushButton *btn_save3;
    QPushButton *btn_back3;

    void setupUi(QDialog *dialog_word)
    {
        if (dialog_word->objectName().isEmpty())
            dialog_word->setObjectName(QStringLiteral("dialog_word"));
        dialog_word->resize(708, 645);
        label = new QLabel(dialog_word);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 80, 68, 15));
        label_2 = new QLabel(dialog_word);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 150, 91, 16));
        label_3 = new QLabel(dialog_word);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(130, 210, 101, 16));
        lineEdit = new QLineEdit(dialog_word);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(280, 150, 113, 21));
        lineEdit_2 = new QLineEdit(dialog_word);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(280, 210, 113, 21));
        lineEdit_3 = new QLineEdit(dialog_word);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(270, 280, 113, 21));
        label_4 = new QLabel(dialog_word);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(140, 290, 68, 15));
        btn_save3 = new QPushButton(dialog_word);
        btn_save3->setObjectName(QStringLiteral("btn_save3"));
        btn_save3->setGeometry(QRect(130, 390, 93, 28));
        btn_save3->setAutoDefault(true);
        btn_back3 = new QPushButton(dialog_word);
        btn_back3->setObjectName(QStringLiteral("btn_back3"));
        btn_back3->setGeometry(QRect(290, 390, 93, 28));

        retranslateUi(dialog_word);

        QMetaObject::connectSlotsByName(dialog_word);
    } // setupUi

    void retranslateUi(QDialog *dialog_word)
    {
        dialog_word->setWindowTitle(QApplication::translate("dialog_word", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("dialog_word", "\350\256\260\345\215\225\350\257\215", Q_NULLPTR));
        label_2->setText(QApplication::translate("dialog_word", "\345\267\262\346\211\223\345\215\241\345\244\251\346\225\260", Q_NULLPTR));
        label_3->setText(QApplication::translate("dialog_word", "\350\277\236\347\273\255\346\211\223\345\215\241\345\244\251\346\225\260", Q_NULLPTR));
        label_4->setText(QApplication::translate("dialog_word", "\346\227\266\351\225\277", Q_NULLPTR));
        btn_save3->setText(QApplication::translate("dialog_word", "\344\277\235\345\255\230", Q_NULLPTR));
        btn_back3->setText(QApplication::translate("dialog_word", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dialog_word: public Ui_dialog_word {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_WORD_H
