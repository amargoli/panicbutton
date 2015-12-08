/********************************************************************************
** Form generated from reading UI file 'Actions.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIONS_H
#define UI_ACTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Actions
{
public:
    QPushButton *menuButton;
    QLabel *label;
    QPushButton *pushButton_2;
    QListView *listView;
    QCommandLinkButton *commandLinkButton;
    QCommandLinkButton *commandLinkButton_2;
    QCommandLinkButton *commandLinkButton_3;
    QCommandLinkButton *commandLinkButton_4;

    void setupUi(QWidget *Actions)
    {
        if (Actions->objectName().isEmpty())
            Actions->setObjectName(QStringLiteral("Actions"));
        Actions->resize(400, 300);
        Actions->setAutoFillBackground(false);
        menuButton = new QPushButton(Actions);
        menuButton->setObjectName(QStringLiteral("menuButton"));
        menuButton->setGeometry(QRect(0, 0, 91, 61));
        label = new QLabel(Actions);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 0, 191, 51));
        label->setAlignment(Qt::AlignCenter);
        pushButton_2 = new QPushButton(Actions);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 0, 91, 61));
        listView = new QListView(Actions);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(0, 50, 401, 201));
        listView->setFrameShadow(QFrame::Raised);
        listView->setLineWidth(1);
        commandLinkButton = new QCommandLinkButton(Actions);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(0, 50, 401, 51));
        QFont font;
        font.setStrikeOut(false);
        commandLinkButton->setFont(font);
        commandLinkButton->setAcceptDrops(false);
        commandLinkButton->setLayoutDirection(Qt::LeftToRight);
        commandLinkButton->setAutoFillBackground(false);
        commandLinkButton_2 = new QCommandLinkButton(Actions);
        commandLinkButton_2->setObjectName(QStringLiteral("commandLinkButton_2"));
        commandLinkButton_2->setGeometry(QRect(0, 100, 401, 51));
        commandLinkButton_3 = new QCommandLinkButton(Actions);
        commandLinkButton_3->setObjectName(QStringLiteral("commandLinkButton_3"));
        commandLinkButton_3->setGeometry(QRect(0, 150, 401, 41));
        commandLinkButton_4 = new QCommandLinkButton(Actions);
        commandLinkButton_4->setObjectName(QStringLiteral("commandLinkButton_4"));
        commandLinkButton_4->setGeometry(QRect(0, 200, 401, 41));

        retranslateUi(Actions);

        QMetaObject::connectSlotsByName(Actions);
    } // setupUi

    void retranslateUi(QWidget *Actions)
    {
        Actions->setWindowTitle(QApplication::translate("Actions", "Form", 0));
        menuButton->setText(QApplication::translate("Actions", "Menu", 0));
        label->setText(QApplication::translate("Actions", "Actions", 0));
        pushButton_2->setText(QApplication::translate("Actions", "Add", 0));
#ifndef QT_NO_TOOLTIP
        commandLinkButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        commandLinkButton->setText(QApplication::translate("Actions", "Chris", 0));
        commandLinkButton_2->setText(QApplication::translate("Actions", "Mother", 0));
        commandLinkButton_3->setText(QApplication::translate("Actions", "Father", 0));
        commandLinkButton_4->setText(QApplication::translate("Actions", "I.C.E", 0));
    } // retranslateUi

};

namespace Ui {
    class Actions: public Ui_Actions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTIONS_H
