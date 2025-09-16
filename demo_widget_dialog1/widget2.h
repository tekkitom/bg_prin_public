#ifndef WIDGET2_H
#define WIDGET2_H

#include <QWidget>
#include "dialogerster.h"

namespace Ui {
class Widget2;
}

class Widget2 : public QWidget
{
    Q_OBJECT

public:
    explicit Widget2(QWidget *parent = nullptr);
    ~Widget2();

    DialogErster *getDialogErster() const;
    void setDialogErster(DialogErster *newDialogErster);

public slots:
    void showDialogErster();
    void hideMe();

private:
    Ui::Widget2 *ui;
    DialogErster *dialogErster;
};

#endif // WIDGET2_H
