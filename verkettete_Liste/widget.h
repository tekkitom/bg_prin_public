#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "modeldata.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void appendEntry();
    void prependEntry();

    void on_btnGoToStart_clicked();

    void on_btnNextEntry_clicked();


    void on_btnInsertBefore_clicked();

    void on_btnInsertAfter_clicked();

    void on_btnUpdate_clicked();

    void on_btnRemove_clicked();

private:
    Ui::Widget *ui;

    ModelData *myVerwalung;
};

#endif // WIDGET_H
