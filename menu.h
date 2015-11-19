#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include <Actions.h>
#include <settings.h>
#include <menu.h>
#include <MainScreen.h>


namespace Ui {
class Menu;
}

class Menu : public QWidget
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = 0);
    ~Menu();

public slots:
    void openActions();
    void openMainScreen();
    void openMenu();
    void openSettings();



private slots:
    void on_menuButton_clicked();

    void on_homeLinkButton_clicked();

    void on_actionsLinkButton_clicked();

    void on_settingsLinkButton_clicked();

private:
    Ui::Menu *ui;



};

#endif // MENU_H
