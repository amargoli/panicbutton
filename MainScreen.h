#ifndef MAINSCREEN_H
#define MAINSCREEN_H

#include <QWidget>
#include <MainScreen.h>
#include <menu.h>


namespace Ui {
class MainScreen;
}

class MainScreen : public QWidget
{
    Q_OBJECT

public:
    explicit MainScreen(QWidget *parent = 0);
    ~MainScreen();
    Menu     *winAbout;
    Ui::MainScreen *ui;

public slots:
    void openMenu(); //make a new function to call the window

private slots:
    void on_menuButton_clicked();

private:
//    Ui::MainScreen *ui;

    //Menu     *winAbout;
};

#endif // MAINSCREEN_H
