#include "Example.h"
#include "ui_example.h"

Example::Example(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Example)
{
    ui->setupUi(this);


    // C++ arrays are the worst to populate

    labelArray[0]=ui->label_1;
    labelArray[1]=ui->label_2;
    labelArray[2]=ui->label_3;
    labelArray[3]=ui->label_4;
    labelArray[4]=ui->label_5;
    labelArray[5]=ui->label_6;
    labelArray[6]=ui->label_7;
    labelArray[7]=ui->label_8;
    labelArray[8]=ui->label_9;
    labelArray[9]=ui->label_10;

    for(int i = 0;i<10;i++)
    {
        labelArray[i]->hide();
    }

}

Example::~Example()
{
    delete ui;
}

void Example::on_spinner_valueChanged(int numLabels)
{
    for(int i = 0;i < numLabels; i++)
    {
        labelArray[i]->show();
    }

//    if (prevVal > numLabels)
//    {
//        labelArray[numLabels+1]->hide();
//    }
//    prevVal = numLabels;
}
