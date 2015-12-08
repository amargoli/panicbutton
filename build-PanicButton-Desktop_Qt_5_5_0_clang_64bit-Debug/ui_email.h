/********************************************************************************
** Form generated from reading UI file 'email.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMAIL_H
#define UI_EMAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Email
{
public:
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QSpinBox *GPSspinBox_2;
    QLabel *label_5;
    QSpinBox *GPSspinBox;
    QToolButton *toolButton;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;

    void setupUi(QWidget *Email)
    {
        if (Email->objectName().isEmpty())
            Email->setObjectName(QStringLiteral("Email"));
        Email->resize(400, 340);
        label_3 = new QLabel(Email);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 140, 101, 16));
        lineEdit = new QLineEdit(Email);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 90, 351, 31));
        label_2 = new QLabel(Email);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 20, 81, 20));
        GPSspinBox_2 = new QSpinBox(Email);
        GPSspinBox_2->setObjectName(QStringLiteral("GPSspinBox_2"));
        GPSspinBox_2->setGeometry(QRect(20, 290, 48, 24));
        label_5 = new QLabel(Email);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 270, 101, 16));
        GPSspinBox = new QSpinBox(Email);
        GPSspinBox->setObjectName(QStringLiteral("GPSspinBox"));
        GPSspinBox->setGeometry(QRect(20, 230, 48, 24));
        toolButton = new QToolButton(Email);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(0, 0, 71, 61));
        label = new QLabel(Email);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 70, 101, 16));
        label_4 = new QLabel(Email);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 210, 101, 16));
        lineEdit_2 = new QLineEdit(Email);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(20, 160, 351, 31));
        pushButton = new QPushButton(Email);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 160, 41, 32));

        retranslateUi(Email);

        QMetaObject::connectSlotsByName(Email);
    } // setupUi

    void retranslateUi(QWidget *Email)
    {
        Email->setWindowTitle(QApplication::translate("Email", "Form", 0));
        label_3->setText(QApplication::translate("Email", "Email Address:", 0));
        label_2->setText(QApplication::translate("Email", "Menu", 0));
        label_5->setText(QApplication::translate("Email", "Maps Link:", 0));
        toolButton->setText(QApplication::translate("Email", "menu", 0));
        label->setText(QApplication::translate("Email", "Contact Name:", 0));
        label_4->setText(QApplication::translate("Email", "GPS Location:", 0));
        lineEdit_2->setText(QString());
        pushButton->setText(QApplication::translate("Email", "+", 0));
    } // retranslateUi

};

namespace Ui {
    class Email: public Ui_Email {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMAIL_H
