#ifndef EXAMPLE_H
#define EXAMPLE_H

#include <QWidget>
#include <QLabel>

namespace Ui {
class Example;
}

class Example : public QWidget
{
    Q_OBJECT

public:
    explicit Example(QWidget *parent = 0);
    ~Example();

private slots:
    void on_spinner_valueChanged(int numLabels);

private:
    Ui::Example *ui;
    QLabel* labelArray[10];
    int prevVal;
};

#endif // EXAMPLE_H
