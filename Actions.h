#ifndef ACTIONS_H
#define ACTIONS_H

#include <QWidget>
#include <AddAction.h>
#include <windowmanager.h>

namespace Ui {
class Actions;
}

class Actions : public QWidget
{
    Q_OBJECT

public:
    explicit Actions(QWidget *parent = 0);
    ~Actions();

public slots:
    void openAddAction(); //make a new function to call the window
    void openMenu();
protected:


private slots:
    void on_pushButton_2_clicked();

    void on_menuButton_clicked();

private:
    Ui::Actions *ui;

};

#endif // ACTIONS_H
