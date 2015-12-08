/********************************************************************************
** Form generated from reading UI file 'AddAction.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDACTION_H
#define UI_ADDACTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddAction
{
public:
    QPushButton *menuButton;
    QLabel *label;
    QLabel *label_2;
    QComboBox *alertType;
    QPushButton *nextButton;

    void setupUi(QWidget *AddAction)
    {
        if (AddAction->objectName().isEmpty())
            AddAction->setObjectName(QStringLiteral("AddAction"));
        AddAction->resize(400, 300);
        AddAction->setAcceptDrops(true);
        menuButton = new QPushButton(AddAction);
        menuButton->setObjectName(QStringLiteral("menuButton"));
        menuButton->setGeometry(QRect(0, 0, 91, 61));
        label = new QLabel(AddAction);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(88, 0, 231, 51));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(AddAction);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 70, 171, 31));
        alertType = new QComboBox(AddAction);
        alertType->setObjectName(QStringLiteral("alertType"));
        alertType->setGeometry(QRect(40, 100, 301, 41));
        alertType->setContextMenuPolicy(Qt::ActionsContextMenu);
        alertType->setAcceptDrops(true);
        alertType->setAutoFillBackground(true);
        alertType->setEditable(false);
        alertType->setFrame(false);
        nextButton = new QPushButton(AddAction);
        nextButton->setObjectName(QStringLiteral("nextButton"));
        nextButton->setGeometry(QRect(300, 0, 101, 61));

        retranslateUi(AddAction);

        QMetaObject::connectSlotsByName(AddAction);
    } // setupUi

    void retranslateUi(QWidget *AddAction)
    {
        AddAction->setWindowTitle(QApplication::translate("AddAction", "Form", 0));
        menuButton->setText(QApplication::translate("AddAction", "Menu", 0));
        label->setText(QApplication::translate("AddAction", "Add Action", 0));
        label_2->setText(QApplication::translate("AddAction", "Alert Type: ", 0));
        alertType->clear();
        alertType->insertItems(0, QStringList()
         << QApplication::translate("AddAction", "Choose an Alert Type", 0)
         << QApplication::translate("AddAction", "Text Message", 0)
         << QApplication::translate("AddAction", "Phone Call", 0)
         << QApplication::translate("AddAction", "E-mail", 0)
        );
        alertType->setCurrentText(QApplication::translate("AddAction", "Choose an Alert Type", 0));
        nextButton->setText(QApplication::translate("AddAction", "Next", 0));
    } // retranslateUi

};

namespace Ui {
    class AddAction: public Ui_AddAction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDACTION_H
