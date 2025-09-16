#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    dialogErster = new DialogErster;
    widget2 = new Widget2;
    widget2->setDialogErster(dialogErster);

    connect(ui->btnDialogErsterModal, &QPushButton::clicked, this, &Widget::callDialogErsterModal);
    connect(ui->btnDialogErsterNonModal, &QPushButton::clicked, this, &Widget::callDialogErsterNonModal);
    connect(ui->getTextFromDialogErster, &QPushButton::clicked, this, &Widget::getTextFromDialogErster);
    connect(ui->btnShowWidget2, &QPushButton::clicked, this, &Widget::showWidget2);
    connect(ui->btnHideWidget2, &QPushButton::clicked, widget2, &Widget2::hideMe);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::callDialogErsterModal()
{
    QString text2;

    dialogErster->exec();
    text2 = dialogErster->getText();
    ui->edtLog->appendPlainText(text2);
}

void Widget::callDialogErsterNonModal()
{
    QString text2;

    dialogErster->show();
    text2 = dialogErster->getText();
    ui->edtLog->appendPlainText(text2);
}

void Widget::getTextFromDialogErster()
{
    QString text2;

    text2 = dialogErster->getText();
    ui->edtLog->appendPlainText(text2);
}

void Widget::showWidget2()
{
    widget2->show();
}
