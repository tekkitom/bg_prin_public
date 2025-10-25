#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "controllerexponential.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void rechneAdd();
    void rechneSub();
    void rechneMul();
    void rechneDiv();
    void rechnePow();
    void rechneSqrt();

private:
    Ui::Widget *ui;
    ControllerExponential *myControllerExponential;

    void sendValuesToController();
};
#endif // WIDGET_H
