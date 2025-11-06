#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    myVerwalung = new Verwaltung;

    connect(ui->btnAppend, &QPushButton::clicked, this, &Widget::appendEntry);
    connect(ui->btnPrepend, &QPushButton::clicked, this, &Widget::prependEntry);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btnGoToStart_clicked()
{
    QString name;
    QString telNr;

    myVerwalung->erstesElement(name, telNr);
    ui->edtNameCurrent->setText(name);
    ui->edtTelNrCurrent->setText(telNr);
}

void Widget::on_btnNextEntry_clicked()
{
    QString name = ui->edtNameCurrent->text();
    QString telNr;

    myVerwalung->elementVor(name, name, telNr);
    ui->edtNameCurrent->setText(name);
    ui->edtTelNrCurrent->setText(telNr);
}

void Widget::appendEntry()
{
    myVerwalung->elementHintenAnhaengen(ui->edtNameNew->text(), ui->edtTelNrNew->text());
}

void Widget::prependEntry()
{
    myVerwalung->elementVorneAnhaengen(ui->edtNameNew->text(), ui->edtTelNrNew->text());
}


void Widget::on_btnInsertBefore_clicked()
{
    myVerwalung->elementEinfuegenVorAktuellem(ui->edtNameCurrent->text(), ui->edtNameNew->text(), ui->edtTelNrNew->text());
}

void Widget::on_btnInsertAfter_clicked()
{
    myVerwalung->elementEinfuegenNachAktuellem(ui->edtNameCurrent->text(), ui->edtNameNew->text(), ui->edtTelNrNew->text());
}

void Widget::on_btnUpdate_clicked()
{
    myVerwalung->elementAendern(ui->edtNameCurrent->text(), ui->edtNameNew->text(), ui->edtTelNrNew->text());
}

void Widget::on_btnRemove_clicked()
{
    myVerwalung->elementLoeschen(ui->edtNameCurrent->text());
}
