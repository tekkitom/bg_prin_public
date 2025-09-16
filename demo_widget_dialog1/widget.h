#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "dialogerster.h"
#include "widget2.h"

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
    void callDialogErsterModal();
    void callDialogErsterNonModal();
    void getTextFromDialogErster();
    void showWidget2();

private:
    Ui::Widget *ui;
    DialogErster *dialogErster;
    Widget2 *widget2;
};
#endif // WIDGET_H
