#ifndef EMAIL_H
#define EMAIL_H

#include <QWidget>

namespace Ui {
class Email;
}

class Email : public QWidget
{
    Q_OBJECT

public:
    explicit Email(QWidget *parent = 0);
    ~Email();

private:
    Ui::Email *ui;
};

#endif // EMAIL_H
