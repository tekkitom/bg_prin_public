#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "controllerpotenzfunc.h"
#include "controllerint.h"

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
    void rechneAdd2();
    void rechneAdd3();
    void rechneAdd4();
    void rechneSub();
    void rechneMul();
    void rechneDiv();
    void rechnePow();
    void rechneSqrt();

private:
    Ui::Widget *ui;
    ControllerPotenzFunc *myControllerPotenzFunc; /// Double-Werte
    ControllerInt *myControllerInt; /// Int-Werte
    void sendValuesToController();
};
#endif // WIDGET_H
