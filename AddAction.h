#ifndef ADDACTION_H
#define ADDACTION_H

#include <QWidget>
#include <windowmanager.h>

namespace Ui {
class AddAction;
}

class AddAction : public QWidget
{
    Q_OBJECT

public:
    explicit AddAction(QWidget *parent = 0);
    ~AddAction();

public slots:
    void openCallAddAction(); //make a new function to call the window
    void openTextAddAction();
    void openEmailAddAction();
    void openMenu();
protected:


private slots:
    void on_nextButton_clicked();


    void on_menuButton_clicked();

private:
    Ui::AddAction *ui;


};

#endif // ADDACTION_H
