/********************************************************************************
** Form generated from reading UI file 'MainScreen.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINSCREEN_H
#define UI_MAINSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainScreen
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QToolButton *menuButton;
    QLabel *label_2;

    void setupUi(QWidget *MainScreen)
    {
        if (MainScreen->objectName().isEmpty())
            MainScreen->setObjectName(QStringLiteral("MainScreen"));
        MainScreen->resize(400, 420);
        pushButton = new QPushButton(MainScreen);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 160, 141, 131));
        label = new QLabel(MainScreen);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 290, 131, 16));
        menuButton = new QToolButton(MainScreen);
        menuButton->setObjectName(QStringLiteral("menuButton"));
        menuButton->setGeometry(QRect(0, 0, 71, 61));
        label_2 = new QLabel(MainScreen);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 20, 81, 20));

        retranslateUi(MainScreen);

        QMetaObject::connectSlotsByName(MainScreen);
    } // setupUi

    void retranslateUi(QWidget *MainScreen)
    {
        MainScreen->setWindowTitle(QApplication::translate("MainScreen", "Form", 0));
        pushButton->setText(QApplication::translate("MainScreen", "PUSH", 0));
        label->setText(QApplication::translate("MainScreen", "Hold for 5 secconds", 0));
        menuButton->setText(QApplication::translate("MainScreen", "menu", 0));
        label_2->setText(QApplication::translate("MainScreen", "Panic Button", 0));
    } // retranslateUi

};

namespace Ui {
    class MainScreen: public Ui_MainScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSCREEN_H
