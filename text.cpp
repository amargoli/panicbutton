#include "text.h"
#include "ui_text.h"

Text::Text(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Text)
{
    ui->setupUi(this);

//    winMenu2 = new Menu();
}

Text::~Text()
{
    delete ui;
}

//void Text::openMenu()
//{
//    winMenu2->show();
//    this->hide();
//}

//void Text::on_menuButton_clicked()
//{
//    openMenu();
//}
