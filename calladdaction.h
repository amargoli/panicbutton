#ifndef CALLADDACTION_H
#define CALLADDACTION_H

#include <QWidget>

namespace Ui {
class CallAddAction;
}

class CallAddAction : public QWidget
{
    Q_OBJECT

public:
    explicit CallAddAction(QWidget *parent = 0);
    ~CallAddAction();

private slots:
    void on_pushButton_clicked();

private:
    Ui::CallAddAction *ui;
};

#endif // CALLADDACTION_H
