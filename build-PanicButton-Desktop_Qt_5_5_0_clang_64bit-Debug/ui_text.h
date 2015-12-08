/********************************************************************************
** Form generated from reading UI file 'text.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXT_H
#define UI_TEXT_H

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

class Ui_Text
{
public:
    QLabel *label_2;
    QToolButton *menuButton;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QSpinBox *GPSspinBox;
    QLabel *label_4;
    QSpinBox *GPSspinBox_2;
    QLabel *label_5;
    QPushButton *pushButton;

    void setupUi(QWidget *Text)
    {
        if (Text->objectName().isEmpty())
            Text->setObjectName(QStringLiteral("Text"));
        Text->resize(400, 342);
        label_2 = new QLabel(Text);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 20, 81, 20));
        menuButton = new QToolButton(Text);
        menuButton->setObjectName(QStringLiteral("menuButton"));
        menuButton->setGeometry(QRect(0, 0, 71, 61));
        label = new QLabel(Text);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 70, 101, 16));
        lineEdit = new QLineEdit(Text);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 90, 351, 31));
        label_3 = new QLabel(Text);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 140, 101, 16));
        lineEdit_2 = new QLineEdit(Text);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(20, 160, 351, 31));
        GPSspinBox = new QSpinBox(Text);
        GPSspinBox->setObjectName(QStringLiteral("GPSspinBox"));
        GPSspinBox->setGeometry(QRect(20, 230, 48, 24));
        label_4 = new QLabel(Text);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 210, 101, 16));
        GPSspinBox_2 = new QSpinBox(Text);
        GPSspinBox_2->setObjectName(QStringLiteral("GPSspinBox_2"));
        GPSspinBox_2->setGeometry(QRect(20, 290, 48, 24));
        label_5 = new QLabel(Text);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 270, 101, 16));
        pushButton = new QPushButton(Text);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 160, 41, 32));

        retranslateUi(Text);

        QMetaObject::connectSlotsByName(Text);
    } // setupUi

    void retranslateUi(QWidget *Text)
    {
        Text->setWindowTitle(QApplication::translate("Text", "Form", 0));
        label_2->setText(QApplication::translate("Text", "Menu", 0));
        menuButton->setText(QApplication::translate("Text", "menu", 0));
        label->setText(QApplication::translate("Text", "Contact Name:", 0));
        label_3->setText(QApplication::translate("Text", "Phone Number:", 0));
        lineEdit_2->setText(QString());
        label_4->setText(QApplication::translate("Text", "GPS Location:", 0));
        label_5->setText(QApplication::translate("Text", "Maps Link:", 0));
        pushButton->setText(QApplication::translate("Text", "+", 0));
    } // retranslateUi

};

namespace Ui {
    class Text: public Ui_Text {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXT_H
