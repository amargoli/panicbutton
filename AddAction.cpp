#include "AddAction.h"
#include "ui_AddAction.h"

AddAction::AddAction(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddAction)
{
    ui->setupUi(this);
    winAbout = new CallAddAction();
    winText = new Text();
    winEmail = new Email();


}

AddAction::~AddAction()
{
    delete ui;
}

void AddAction::openCallAddAction()
{
    winAbout->show();
    this->hide();
}

void AddAction::openTextAddAction()
{
    winText->show();
    this->hide();
}

void AddAction::openEmailAddAction()
{
    winEmail->show();
    this->hide();
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



