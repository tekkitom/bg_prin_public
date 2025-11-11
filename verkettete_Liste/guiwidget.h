#ifndef GUIWIDGET_H
#define GUIWIDGET_H

#include <QWidget>
//#include "modeldata.h"
#include "controller.h"

namespace Ui {
class Widget;
}

class GuiWidget : public QWidget
{
    Q_OBJECT

public:
    explicit GuiWidget(QWidget *parent = 0);
    ~GuiWidget();

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

    std::unique_ptr<Controller> myController;
    //ModelData *myVerwalung;
};

#endif // GUIWIDGET_H
