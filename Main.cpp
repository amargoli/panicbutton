//#include "Example.h"
//#include <QStackedLayout>
#include <QApplication>
//#include <Qtgui>
#include <windowmanager.h>
//#include <MainScreen.h>
//#include <menu.h>
//#include <Actions.h>
//#include <AddAction.h>
//#include <calladdaction.h>
//#include <text.h>
//#include <email.h>
//#include <settings.h>


//class Widget : public QWidget
//{
//public:
//    Widget(QWidget *parent = 0);
//};

//Widget::Widget(QWidget *parent)
//    : QWidget(parent)
//{

//    QWidget *mainPageWidget = new MainScreen;
//    QWidget *menuPageWidget = new Menu;
//    QWidget *actionsPageWidget = new Actions;
//    QWidget *addActionPageWidget = new AddAction;
//    QWidget *callActionPageWidget = new CallAddAction;
//    QWidget *textActionPageWidget = new Text;
//    QWidget *emailActionPageWidget = new Email;
//    QWidget *settingsPageWidget = new Settings;


//    QStackedLayout *stackedLayout = new QStackedLayout;
//    stackedLayout->addWidget(mainPageWidget);
//    stackedLayout->addWidget(menuPageWidget);
//    stackedLayout->addWidget(actionsPageWidget);
//    stackedLayout->addWidget(addActionPageWidget);
//    stackedLayout->addWidget(callActionPageWidget);
//    stackedLayout->addWidget(textActionPageWidget);
//    stackedLayout->addWidget(emailActionPageWidget);
//    stackedLayout->addWidget(settingsPageWidget);



////    QComboBox *pageComboBox = new QComboBox;
////    pageComboBox->addItem(tr("Page 1"));
////    pageComboBox->addItem(tr("Page 2"));
////    pageComboBox->addItem(tr("Page 3"));
////    connect(pageComboBox, SIGNAL(activated(int)),
////            stackedLayout, SLOT(setCurrentIndex(int)));


//    stackedLayout->setCurrentIndex(0);

//    QVBoxLayout *mainLayout = new QVBoxLayout;

//    //mainLayout->addWidget(pageComboBox);

//    mainLayout->addLayout(stackedLayout);
//    setLayout(mainLayout);

//}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WindowManager* w;
    w = WindowManager::getInstance();
    w->show();



    return a.exec();
}
