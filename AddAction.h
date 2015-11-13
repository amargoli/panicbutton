#ifndef ADDACTION_H
#define ADDACTION_H

#include <QWidget>
#include <calladdaction.h>
#include <text.h>
#include <email.h>
//#include <menu.h>

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
protected:


private slots:
    void on_nextButton_clicked();


private:
    Ui::AddAction *ui;
    CallAddAction    *winAbout;
    Text *winText;
    Email *winEmail;

};

#endif // ADDACTION_H
