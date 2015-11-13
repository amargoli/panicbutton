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

void CallAddAction::on_pushButton_clicked()
{

}
