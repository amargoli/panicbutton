#include "calladdaction.h"
#include "ui_calladdaction.h"

CallAddAction::CallAddAction(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CallAddAction)
{
    ui->setupUi(this);
}

CallAddAction::~CallAddAction()
{
    delete ui;
}


void CallAddAction::openMenu()
{
    WindowManager* w;
    w = WindowManager::getInstance();
    w->changePage(1);
}

void CallAddAction::on_menuButton_clicked()
{
    openMenu();
}
