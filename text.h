#ifndef TEXT_H
#define TEXT_H

#include <QWidget>
//#include <menu.h>

namespace Ui {
class Text;
}

class Text : public QWidget
{
    Q_OBJECT

public:
    explicit Text(QWidget *parent = 0);
    ~Text();

public slots:
//    void openMenu(); //make a new function to call the window


private slots:
//    void on_menuButton_clicked();

private:
    Ui::Text *ui;

//    Menu *winMenu2;
};

#endif // TEXT_H
