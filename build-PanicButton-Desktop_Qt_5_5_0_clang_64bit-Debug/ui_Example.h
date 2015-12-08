/********************************************************************************
** Form generated from reading UI file 'Example.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMPLE_H
#define UI_EXAMPLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Example
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpinBox *spinner;
    QLabel *applabel;
    QLabel *spinlabel;
    QPushButton *colorbutton;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;

    void setupUi(QWidget *Example)
    {
        if (Example->objectName().isEmpty())
            Example->setObjectName(QStringLiteral("Example"));
        Example->resize(400, 300);
        gridLayoutWidget = new QWidget(Example);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 10, 349, 80));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        spinner = new QSpinBox(gridLayoutWidget);
        spinner->setObjectName(QStringLiteral("spinner"));
        spinner->setMaximum(10);

        gridLayout->addWidget(spinner, 1, 0, 1, 1);

        applabel = new QLabel(gridLayoutWidget);
        applabel->setObjectName(QStringLiteral("applabel"));

        gridLayout->addWidget(applabel, 0, 0, 1, 1);

        spinlabel = new QLabel(gridLayoutWidget);
        spinlabel->setObjectName(QStringLiteral("spinlabel"));

        gridLayout->addWidget(spinlabel, 1, 1, 1, 1);

        colorbutton = new QPushButton(gridLayoutWidget);
        colorbutton->setObjectName(QStringLiteral("colorbutton"));

        gridLayout->addWidget(colorbutton, 0, 1, 1, 1);

        label_1 = new QLabel(Example);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(130, 130, 111, 21));
        label_2 = new QLabel(Example);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(250, 140, 67, 21));
        label_3 = new QLabel(Example);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 170, 67, 21));
        label_4 = new QLabel(Example);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(150, 160, 67, 21));
        label_5 = new QLabel(Example);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 240, 67, 21));
        label_6 = new QLabel(Example);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(150, 220, 67, 21));
        label_7 = new QLabel(Example);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(260, 180, 131, 21));
        label_8 = new QLabel(Example);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(290, 240, 67, 21));
        label_9 = new QLabel(Example);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(200, 280, 131, 21));
        label_10 = new QLabel(Example);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 110, 67, 21));

        retranslateUi(Example);

        QMetaObject::connectSlotsByName(Example);
    } // setupUi

    void retranslateUi(QWidget *Example)
    {
        Example->setWindowTitle(QApplication::translate("Example", "Desktop apps have some differences from mobile ones", 0));
        applabel->setText(QApplication::translate("Example", "THIS IS AN APP WHOA", 0));
        spinlabel->setText(QApplication::translate("Example", "Spin the box for more labels", 0));
        colorbutton->setText(QApplication::translate("Example", "Push for new colors", 0));
        label_1->setText(QApplication::translate("Example", "why did i do this", 0));
        label_2->setText(QApplication::translate("Example", ":(", 0));
        label_3->setText(QApplication::translate("Example", "[joke]", 0));
        label_4->setText(QApplication::translate("Example", "SDJFH:KJDSHF:LK", 0));
        label_5->setText(QApplication::translate("Example", "wow ok", 0));
        label_6->setText(QApplication::translate("Example", "butts", 0));
        label_7->setText(QApplication::translate("Example", "laptops are cancer", 0));
        label_8->setText(QApplication::translate("Example", "LABEL", 0));
        label_9->setText(QApplication::translate("Example", "i hate labels", 0));
        label_10->setText(QApplication::translate("Example", "fuck", 0));
    } // retranslateUi

};

namespace Ui {
    class Example: public Ui_Example {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMPLE_H
