/********************************************************************************
** Form generated from reading UI file 'calladdaction.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALLADDACTION_H
#define UI_CALLADDACTION_H

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

class Ui_CallAddAction
{
public:
    QPushButton *menuButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;

    void setupUi(QWidget *CallAddAction)
    {
        if (CallAddAction->objectName().isEmpty())
            CallAddAction->setObjectName(QStringLiteral("CallAddAction"));
        CallAddAction->resize(400, 471);
        menuButton = new QPushButton(CallAddAction);
        menuButton->setObjectName(QStringLiteral("menuButton"));
        menuButton->setGeometry(QRect(0, 0, 81, 61));
        label = new QLabel(CallAddAction);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(78, 5, 251, 41));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(CallAddAction);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 111, 31));
        label_3 = new QLabel(CallAddAction);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 120, 111, 41));
        label_4 = new QLabel(CallAddAction);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 200, 111, 31));
        label_5 = new QLabel(CallAddAction);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 280, 111, 31));
        label_6 = new QLabel(CallAddAction);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 360, 131, 31));
        lineEdit = new QLineEdit(CallAddAction);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 90, 351, 31));
        lineEdit_2 = new QLineEdit(CallAddAction);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(20, 160, 351, 41));
        pushButton_2 = new QPushButton(CallAddAction);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 170, 31, 21));
        radioButton = new QRadioButton(CallAddAction);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(20, 230, 102, 20));
        radioButton_2 = new QRadioButton(CallAddAction);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(20, 250, 102, 20));
        radioButton_3 = new QRadioButton(CallAddAction);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(20, 310, 102, 20));
        radioButton_4 = new QRadioButton(CallAddAction);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(20, 390, 102, 20));
        radioButton_5 = new QRadioButton(CallAddAction);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(20, 330, 102, 20));
        radioButton_6 = new QRadioButton(CallAddAction);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));
        radioButton_6->setGeometry(QRect(20, 410, 102, 20));

        retranslateUi(CallAddAction);

        QMetaObject::connectSlotsByName(CallAddAction);
    } // setupUi

    void retranslateUi(QWidget *CallAddAction)
    {
        CallAddAction->setWindowTitle(QApplication::translate("CallAddAction", "Form", 0));
        menuButton->setText(QApplication::translate("CallAddAction", "Menu", 0));
        label->setText(QApplication::translate("CallAddAction", "Action: Phone Call", 0));
        label_2->setText(QApplication::translate("CallAddAction", "Action Name:", 0));
        label_3->setText(QApplication::translate("CallAddAction", "Phone Number: ", 0));
        label_4->setText(QApplication::translate("CallAddAction", "Voice Recording:", 0));
        label_5->setText(QApplication::translate("CallAddAction", "GPS Location:", 0));
        label_6->setText(QApplication::translate("CallAddAction", "Maps Link:", 0));
        lineEdit->setText(QApplication::translate("CallAddAction", "Chris", 0));
        lineEdit_2->setText(QApplication::translate("CallAddAction", "             Contacts", 0));
        pushButton_2->setText(QApplication::translate("CallAddAction", "+", 0));
        radioButton->setText(QApplication::translate("CallAddAction", "Enable", 0));
        radioButton_2->setText(QApplication::translate("CallAddAction", "Disable", 0));
        radioButton_3->setText(QApplication::translate("CallAddAction", "Enable", 0));
        radioButton_4->setText(QApplication::translate("CallAddAction", "Enable", 0));
        radioButton_5->setText(QApplication::translate("CallAddAction", "Disable", 0));
        radioButton_6->setText(QApplication::translate("CallAddAction", "Disable", 0));
    } // retranslateUi

};

namespace Ui {
    class CallAddAction: public Ui_CallAddAction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALLADDACTION_H
