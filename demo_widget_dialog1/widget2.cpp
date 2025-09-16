#include "widget2.h"
#include "ui_widget2.h"

Widget2::Widget2(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget2)
{
    ui->setupUi(this);
    connect(ui->btnShowDialogErster, &QPushButton::clicked, this, &Widget2::showDialogErster);
    connect(ui->btnHideMe, &QPushButton::clicked, this, &Widget2::hideMe);
}

Widget2::~Widget2()
{
    delete ui;
}

DialogErster *Widget2::getDialogErster() const
{
    return dialogErster;
}

void Widget2::setDialogErster(DialogErster *newDialogErster)
{
    dialogErster = newDialogErster;
}

void Widget2::showDialogErster()
{
    QString text2;

    dialogErster->exec();
    text2 = dialogErster->getText();
    ui->edtLog->appendPlainText(text2);
}

void Widget2::hideMe()
{
    this->hide();
}
