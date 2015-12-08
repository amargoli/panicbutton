/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QPushButton *menuButton;
    QLabel *label;
    QListWidget *listWidget;
    QCommandLinkButton *homeLinkButton;
    QCommandLinkButton *actionsLinkButton;
    QCommandLinkButton *settingsLinkButton;

    void setupUi(QWidget *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QStringLiteral("Menu"));
        Menu->resize(400, 300);
        Menu->setLayoutDirection(Qt::LeftToRight);
        menuButton = new QPushButton(Menu);
        menuButton->setObjectName(QStringLiteral("menuButton"));
        menuButton->setGeometry(QRect(0, 0, 101, 61));
        label = new QLabel(Menu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(98, 5, 221, 41));
        label->setAlignment(Qt::AlignCenter);
        listWidget = new QListWidget(Menu);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(0, 50, 401, 192));
        homeLinkButton = new QCommandLinkButton(Menu);
        homeLinkButton->setObjectName(QStringLiteral("homeLinkButton"));
        homeLinkButton->setGeometry(QRect(0, 50, 401, 61));
        QFont font;
        font.setKerning(true);
        homeLinkButton->setFont(font);
        homeLinkButton->setIconSize(QSize(0, 0));
        actionsLinkButton = new QCommandLinkButton(Menu);
        actionsLinkButton->setObjectName(QStringLiteral("actionsLinkButton"));
        actionsLinkButton->setGeometry(QRect(0, 110, 401, 61));
        actionsLinkButton->setIconSize(QSize(0, 0));
        settingsLinkButton = new QCommandLinkButton(Menu);
        settingsLinkButton->setObjectName(QStringLiteral("settingsLinkButton"));
        settingsLinkButton->setGeometry(QRect(0, 180, 401, 61));
        settingsLinkButton->setIconSize(QSize(0, 0));

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QWidget *Menu)
    {
        Menu->setWindowTitle(QApplication::translate("Menu", "Form", 0));
        menuButton->setText(QApplication::translate("Menu", "Menu", 0));
        label->setText(QApplication::translate("Menu", "Menu", 0));
        homeLinkButton->setText(QApplication::translate("Menu", "Home", 0));
        actionsLinkButton->setText(QApplication::translate("Menu", "Actions", 0));
        settingsLinkButton->setText(QApplication::translate("Menu", "Settings", 0));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
