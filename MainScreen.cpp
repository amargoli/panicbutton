#include "MainScreen.h"
#include "ui_MainScreen.h"

MainScreen::MainScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainScreen)
{
    ui->setupUi(this);
    winAbout = new Menu();

    this->show();
}

MainScreen::~MainScreen()
{
    delete ui;
}

void MainScreen::openMenu()
{
    winAbout->show();
    this->close();
}

void MainScreen::on_menuButton_clicked()
{
    openMenu();
}


