#ifndef CALLADDACTION_H
#define CALLADDACTION_H

#include <QWidget>
#include <windowmanager.h>

namespace Ui {
class CallAddAction;
}

class CallAddAction : public QWidget
{
    Q_OBJECT

public:
    explicit CallAddAction(QWidget *parent = 0);
    ~CallAddAction();
    void openMenu();


private slots:
    void on_menuButton_clicked();

private:
    Ui::CallAddAction *ui;
};

#endif // CALLADDACTION_H
