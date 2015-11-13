#include "Actions.h"
#include "ui_Actions.h"

Actions::Actions(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Actions)
{
    ui->setupUi(this);
    winAbout = new AddAction();


}

Actions::~Actions()
{
    delete ui;
}

void Actions::openAddAction()
{
    winAbout->show();
    this->hide();
}


void Actions::on_pushButton_2_clicked()
{
    openAddAction();
}

