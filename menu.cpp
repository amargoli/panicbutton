#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);

    winActions = new Actions;
//    winMainScreen =  new MainScreen;
//    winMenu = new Menu;
    winSettings = new Settings;


}

Menu::~Menu()
{
    delete ui;
}

void Menu:: openActions()
{
    winActions->show();
    this->hide();
}
//void Menu::openMainScreen()
//{

//    winMainScreen->show();
//    this->hide();
//}
//void Menu::openMenu()
//{
//    winMenu->show();
//    this->hide();
//}
void Menu::openSettings()
{
    winSettings->show();
    this->hide();

}

//void Menu::on_menuButton_clicked()
//{
//    openMenu();
//}

//void Menu::on_homeLinkButton_clicked()
//{
//    openMainScreen();
//}

void Menu::on_actionsLinkButton_clicked()
{
    openActions();
}

void Menu::on_settingsLinkButton_clicked()
{
    openSettings();
}
