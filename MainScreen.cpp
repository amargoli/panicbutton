#include "MainScreen.h"
#include "ui_MainScreen.h"

MainScreen::MainScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainScreen)
{
    ui->setupUi(this);



}

MainScreen::~MainScreen()
{
    delete ui;
}

void MainScreen::openMenu()
{
    WindowManager* w;
    w = WindowManager::getInstance();
    w->changePage(1);
}

void MainScreen::on_menuButton_clicked()
{
    openMenu();
}


