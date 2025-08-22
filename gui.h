#ifndef GUI_H
#define GUI_H

#include <QWidget>
#include "association.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class GUI;
}
QT_END_NAMESPACE

class GUI : public QWidget
{
    Q_OBJECT

public:
    GUI(QWidget *parent = nullptr);
    ~GUI();

private:
    Ui::GUI *ui;
    Association *association;
};
#endif // GUI_H
