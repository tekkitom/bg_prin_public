#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    myControllerExponential = new ControllerExponential;
    connect(ui->btnAdd,  &QPushButton::clicked, this, &Widget::rechneAdd);
    connect(ui->btnSub,  &QPushButton::clicked, this, &Widget::rechneSub);
    connect(ui->btnMul,  &QPushButton::clicked, this, &Widget::rechneMul);
    connect(ui->btnDiv,  &QPushButton::clicked, this, &Widget::rechneDiv);
    connect(ui->btnPow,  &QPushButton::clicked, this, &Widget::rechnePow);
    connect(ui->btnSqrt, &QPushButton::clicked, this, &Widget::rechneSqrt);
}

Widget::~Widget()
{
    delete ui;
    delete myControllerExponential;
    myControllerExponential = nullptr;
}

void Widget::sendValuesToController()
{
    myControllerExponential->setZahl1(ui->edtZahl1->value());
    myControllerExponential->setZahl2(ui->edtZahl2->value());
}

void Widget::rechneAdd()
{
    double tempVal = 0.0;

    sendValuesToController();
    myControllerExponential->rechneAdd();
    tempVal = myControllerExponential->getSumme();
    ui->edtLog->appendPlainText(QString::number(tempVal));
}

void Widget::rechneSub()
{
    double tempVal = 0.0;

    sendValuesToController();
    myControllerExponential->rechneSub();
    tempVal = myControllerExponential->getDdifferenz();
    ui->edtLog->appendPlainText(QString::number(tempVal));
}

void Widget::rechneMul()
{
    double tempVal = 0.0;

    sendValuesToController();
    myControllerExponential->rechneMul();
    tempVal = myControllerExponential->getProdukt();
    ui->edtLog->appendPlainText(QString::number(tempVal));
}

void Widget::rechneDiv()
{
    double tempVal = 0.0;

    sendValuesToController();
    myControllerExponential->rechneDiv();
    tempVal = myControllerExponential->getQuotient();
    ui->edtLog->appendPlainText(QString::number(tempVal));
}

void Widget::rechnePow()
{
    double tempVal = 0.0;

    sendValuesToController();
    myControllerExponential->rechnePotenzfunktion();
    tempVal = myControllerExponential->getErgebnisPotenzfunktion();
    ui->edtLog->appendPlainText(QString::number(tempVal));
}

void Widget::rechneSqrt()
{
    double tempVal = 0.0;

    sendValuesToController();
    myControllerExponential->rechneWurzel();
    tempVal = myControllerExponential->getErgebnisWurzel();
    ui->edtLog->appendPlainText(QString::number(tempVal));
}
