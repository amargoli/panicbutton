/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QListWidget *listWidget;
    QCommandLinkButton *commandLinkButton;
    QCommandLinkButton *commandLinkButton_2;
    QListView *listView;
    QCommandLinkButton *commandLinkButton_3;
    QCommandLinkButton *commandLinkButton_4;
    QCommandLinkButton *commandLinkButton_5;

    void setupUi(QWidget *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
        Settings->resize(400, 360);
        pushButton = new QPushButton(Settings);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 91, 61));
        label = new QLabel(Settings);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(88, 5, 241, 41));
        label->setAlignment(Qt::AlignCenter);
        listWidget = new QListWidget(Settings);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(0, 50, 401, 120));
        commandLinkButton = new QCommandLinkButton(Settings);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(0, 50, 401, 60));
        commandLinkButton_2 = new QCommandLinkButton(Settings);
        commandLinkButton_2->setObjectName(QStringLiteral("commandLinkButton_2"));
        commandLinkButton_2->setGeometry(QRect(0, 110, 401, 60));
        listView = new QListView(Settings);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(100, 170, 301, 120));
        commandLinkButton_3 = new QCommandLinkButton(Settings);
        commandLinkButton_3->setObjectName(QStringLiteral("commandLinkButton_3"));
        commandLinkButton_3->setGeometry(QRect(100, 170, 301, 40));
        commandLinkButton_4 = new QCommandLinkButton(Settings);
        commandLinkButton_4->setObjectName(QStringLiteral("commandLinkButton_4"));
        commandLinkButton_4->setGeometry(QRect(100, 210, 301, 40));
        commandLinkButton_5 = new QCommandLinkButton(Settings);
        commandLinkButton_5->setObjectName(QStringLiteral("commandLinkButton_5"));
        commandLinkButton_5->setGeometry(QRect(100, 250, 301, 40));

        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QWidget *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Form", 0));
        pushButton->setText(QApplication::translate("Settings", "Menu", 0));
        label->setText(QApplication::translate("Settings", "Settings", 0));
        commandLinkButton->setText(QApplication::translate("Settings", "Sync", 0));
        commandLinkButton_2->setText(QApplication::translate("Settings", "Action Settings", 0));
        commandLinkButton_3->setText(QApplication::translate("Settings", "Text Message", 0));
        commandLinkButton_4->setText(QApplication::translate("Settings", "Phone Call", 0));
        commandLinkButton_5->setText(QApplication::translate("Settings", "E-mail", 0));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
