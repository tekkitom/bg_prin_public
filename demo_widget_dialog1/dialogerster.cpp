#include "dialogerster.h"
#include "ui_dialogerster.h"

DialogErster::DialogErster(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogErster)
{
    ui->setupUi(this);
    connect(ui->edtText, &QLineEdit::textEdited, this, &DialogErster::updateText);
}

DialogErster::~DialogErster()
{
    delete ui;
}

QString DialogErster::getText() const
{
    return text;
}

void DialogErster::updateText()
{
    text = ui->edtText->text();
}
