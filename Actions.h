#ifndef ACTIONS_H
#define ACTIONS_H

#include <QWidget>
#include <AddAction.h>

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

protected:


private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Actions *ui;
    AddAction     *winAbout;
};

#endif // ACTIONS_H
