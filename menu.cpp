#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);



}

Menu::~Menu()
{
    delete ui;
}

void Menu:: openActions()
{

    WindowManager* w;
    w = WindowManager::getInstance();
    w->changePage(2);
}
void Menu::openMainScreen()
{

    WindowManager* w;
    w = WindowManager::getInstance();
    w->changePage(0);
}
void Menu::openMenu()
{
    WindowManager* w;
    w = WindowManager::getInstance();
    w->changePage(1);
}
void Menu::openSettings()
{
    WindowManager* w;
    w = WindowManager::getInstance();
    w->changePage(7);
}

void Menu::on_menuButton_clicked()
{
    openMenu();
}

void Menu::on_homeLinkButton_clicked()
{
    openMainScreen();
}

void Menu::on_actionsLinkButton_clicked()
{
    openActions();
}

void Menu::on_settingsLinkButton_clicked()
{
    openSettings();
}
