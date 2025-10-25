#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    myControllerPotenzFunc = new ControllerPotenzFunc;
    myControllerInt = new ControllerInt (3, 5);

    connect(ui->btnAdd,  &QPushButton::clicked, this, &Widget::rechneAdd);
    connect(ui->btnSub,  &QPushButton::clicked, this, &Widget::rechneSub);
    connect(ui->btnMul,  &QPushButton::clicked, this, &Widget::rechneMul);
    connect(ui->btnDiv,  &QPushButton::clicked, this, &Widget::rechneDiv);
    connect(ui->btnPow,  &QPushButton::clicked, this, &Widget::rechnePow);
    connect(ui->btnSqrt, &QPushButton::clicked, this, &Widget::rechneSqrt);

    connect(ui->edtZahl2, &QSpinBox::editingFinished, this, &Widget::rechneAdd2);
    connect(ui->edtZahl4, &QSpinBox::editingFinished, this, &Widget::rechneAdd3);
    connect(ui->btnSumme, &QPushButton::clicked, this, &Widget::rechneAdd4);

}

Widget::~Widget()
{
    delete ui;
    delete myControllerPotenzFunc;
    myControllerPotenzFunc = nullptr;
}

void Widget::sendValuesToController()
{
    if(nullptr != myControllerPotenzFunc)
    {
        myControllerPotenzFunc->setZahl1(ui->edtZahl1->value());
        myControllerPotenzFunc->setZahl2(ui->edtZahl2->value());
    }
}

void Widget::rechneAdd()
{
    double tempVal = 0.0;

    sendValuesToController();
    myControllerPotenzFunc->rechneAdd();
    tempVal = myControllerPotenzFunc->getSumme();
    ui->edtLog->appendPlainText(QString::number(tempVal));
}

void Widget::rechneAdd2()
{
    double tempVal = 0.0;
    double tempZahl1 = 0.0;
    double tempZahl2 = 0.0;
    QString outString;
    outString = "lokale Variable: ";

    if(nullptr != myControllerPotenzFunc)
    {
        tempZahl1 = ui->edtZahl1->value();
        tempZahl2 = ui->edtZahl2->value();

        tempVal = myControllerPotenzFunc->rechneAdd(tempZahl1, tempZahl2);
        outString += QString::number(tempVal);
        ui->edtLog->appendPlainText(outString);

        outString = "Attribut: ";
        tempVal = myControllerPotenzFunc->getSumme();
        outString += QString::number(tempVal);
        ui->edtLog->appendPlainText(outString);
    }
}

void Widget::rechneAdd3()
{
    int tempVal = 0;
    int tempZahl1 = 0;
    int tempZahl2 = 0;
    QString outString;
    outString = "lokale Variable: ";

    if(nullptr != myControllerPotenzFunc)
    {
        tempZahl1 = ui->edtZahl3->value();
        tempZahl2 = ui->edtZahl4->value();

        tempVal = myControllerInt->rechneAdd(tempZahl1, tempZahl2);
        outString += QString::number(tempVal);
        ui->edtLog->appendPlainText(outString);

        outString = "Attribut (int): ";
        tempVal = myControllerInt->getSumme();
        outString += QString::number(tempVal);
        ui->edtLog->appendPlainText(outString);

        outString = "Attribut (double): ";
        tempVal = myControllerPotenzFunc->getSumme();
        outString += QString::number(tempVal);
        ui->edtLog->appendPlainText(outString);
    }
}

void Widget::rechneAdd4()
{
    int tempVal = 0;
    QString outString;
    outString = "lokale Variable: ";

    if(nullptr != myControllerPotenzFunc)
    {
        myControllerInt->rechneSumme();

        outString = "Attribut (int): ";
        tempVal = myControllerInt->getSumme();
        outString += QString::number(tempVal);
        ui->edtLog->appendPlainText(outString);

        outString = "Attribut (double): ";
        tempVal = myControllerPotenzFunc->getSumme();
        outString += QString::number(tempVal);
        ui->edtLog->appendPlainText(outString);
    }
}

void Widget::rechneSub()
{
    double tempVal = 0.0;

    sendValuesToController();
    myControllerPotenzFunc->rechneSub();
    tempVal = myControllerPotenzFunc->getDdifferenz();
    ui->edtLog->appendPlainText(QString::number(tempVal));
}

void Widget::rechneMul()
{
    double tempVal = 0.0;

    sendValuesToController();
    myControllerPotenzFunc->rechneMul();
    tempVal = myControllerPotenzFunc->getProdukt();
    ui->edtLog->appendPlainText(QString::number(tempVal));
}

void Widget::rechneDiv()
{
    double tempVal = 0.0;

    sendValuesToController();
    myControllerPotenzFunc->rechneDiv();
    tempVal = myControllerPotenzFunc->getQuotient();
    ui->edtLog->appendPlainText(QString::number(tempVal));
}

void Widget::rechnePow()
{
    double tempVal = 0.0;

    sendValuesToController();
    myControllerPotenzFunc->rechnePotenzfunktion();
    tempVal = myControllerPotenzFunc->getErgebnisPotenzfunktion();
    ui->edtLog->appendPlainText(QString::number(tempVal));
}

void Widget::rechneSqrt()
{
    double tempVal = 0.0;

    sendValuesToController();
    myControllerPotenzFunc->rechneWurzel();
    tempVal = myControllerPotenzFunc->getErgebnisWurzel();
    ui->edtLog->appendPlainText(QString::number(tempVal));
}
