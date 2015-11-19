#include "AddAction.h"
#include "ui_AddAction.h"

AddAction::AddAction(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddAction)
{
    ui->setupUi(this);


}

AddAction::~AddAction()
{
    delete ui;
}

void AddAction::openCallAddAction()
{
    WindowManager* w;
    w = WindowManager::getInstance();
    w->changePage(4);
}

void AddAction::openTextAddAction()
{
    WindowManager* w;
    w = WindowManager::getInstance();
    w->changePage(5);
}

void AddAction::openEmailAddAction()
{
    WindowManager* w;
    w = WindowManager::getInstance();
    w->changePage(6);
}

void AddAction::openMenu()
{
    WindowManager* w;
    w = WindowManager::getInstance();
    w->changePage(1);
}

void AddAction::on_nextButton_clicked()
{
    int item = ui->alertType->currentIndex();


    if (item ==1){
    openTextAddAction();
    }
    else if (item ==2){
        openCallAddAction();
    }
    else if (item ==3){
        openEmailAddAction();
    }
}




void AddAction::on_menuButton_clicked()
{
    openMenu();
}
