#ifndef VIEWWIDGET1_H
#define VIEWWIDGET1_H

#include <QWidget>
#include "controllerlake.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class ViewWidget1;
}
QT_END_NAMESPACE

class ViewWidget1 : public QWidget
{
    Q_OBJECT

public:
    ViewWidget1(QWidget *parent = nullptr);
    ~ViewWidget1();

private:
    Ui::ViewWidget1 *ui;
    ControllerLake *myLake1;

private slots:
    void createLauncherStandardType();
};
#endif // VIEWWIDGET1_H
