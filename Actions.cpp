#include "Actions.h"
#include "ui_Actions.h"

Actions::Actions(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Actions)
{
    ui->setupUi(this);


}

Actions::~Actions()
{
    delete ui;
}

void Actions::openAddAction()
{
    WindowManager* w;
    w = WindowManager::getInstance();
    w->changePage(3);
}

void Actions::openMenu()
{
    WindowManager* w;
    w = WindowManager::getInstance();
    w->changePage(1);
}


void Actions::on_pushButton_2_clicked()
{
    openAddAction();
}


void Actions::on_menuButton_clicked()
{
    openMenu();
}
