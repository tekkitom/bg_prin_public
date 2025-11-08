#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    myVerwalung = new ModelData;

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

    myVerwalung->firstEntry(name, telNr);
    ui->edtNameCurrent->setText(name);
    ui->edtTelNrCurrent->setText(telNr);
}

void Widget::on_btnNextEntry_clicked()
{
    QString name = ui->edtNameCurrent->text();
    QString telNr;

    myVerwalung->nextEntryForward(name, name, telNr);
    ui->edtNameCurrent->setText(name);
    ui->edtTelNrCurrent->setText(telNr);
}

void Widget::appendEntry()
{
    myVerwalung->insertNewEntryBack(ui->edtNameNew->text(), ui->edtTelNrNew->text());
}

void Widget::prependEntry()
{
    myVerwalung->insertNewEntryFront(ui->edtNameNew->text(), ui->edtTelNrNew->text());
}


void Widget::on_btnInsertBefore_clicked()
{
    myVerwalung->insertNewEntryBeforeCurrent(ui->edtNameCurrent->text(), ui->edtNameNew->text(), ui->edtTelNrNew->text());
}

void Widget::on_btnInsertAfter_clicked()
{
    myVerwalung->insertNewEntryMidAfterCurrent(ui->edtNameCurrent->text(), ui->edtNameNew->text(), ui->edtTelNrNew->text());
}

void Widget::on_btnUpdate_clicked()
{
    myVerwalung->changeEntry(ui->edtNameCurrent->text(), ui->edtNameNew->text(), ui->edtTelNrNew->text());
}

void Widget::on_btnRemove_clicked()
{
    myVerwalung->removeEntry(ui->edtNameCurrent->text());
}
