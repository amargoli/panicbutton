#include "windowmanager.h"

WindowManager::WindowManager(QWidget *parent)
    : QWidget(parent)
{
    mainPageWidget = new MainScreen;
    menuPageWidget = new Menu;
    actionsPageWidget = new Actions;
    addActionPageWidget = new AddAction;
    callActionPageWidget = new CallAddAction;
    textActionPageWidget = new Text;
    emailActionPageWidget = new Email;
    settingsPageWidget = new Settings;


    stackedLayout = new QStackedLayout;
    stackedLayout->addWidget(mainPageWidget); //0
    stackedLayout->addWidget(menuPageWidget); //1
    stackedLayout->addWidget(actionsPageWidget); //2
    stackedLayout->addWidget(addActionPageWidget); //3
    stackedLayout->addWidget(callActionPageWidget); //4
    stackedLayout->addWidget(textActionPageWidget); //5
    stackedLayout->addWidget(emailActionPageWidget); //6
    stackedLayout->addWidget(settingsPageWidget); //7


    stackedLayout->setCurrentIndex(0);

    QVBoxLayout *mainLayout = new QVBoxLayout;

    mainLayout->addLayout(stackedLayout);

    setLayout(mainLayout);
}
WindowManager* WindowManager::_instance = 0;

WindowManager* WindowManager::getInstance()
{

    if (_instance==0){
        _instance = new WindowManager();

    }
    return _instance;
}

void WindowManager::changePage(int x)
{
    _instance->stackedLayout->setCurrentIndex(x);
}
