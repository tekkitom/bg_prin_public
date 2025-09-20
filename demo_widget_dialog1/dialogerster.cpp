#include "dialogerster.h"
#include "ui_dialogerster.h"

/**
 * @brief Konstruktor
 * @param parent Widget1
 */
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

/**
 * @brief Text aus UI in Attribut holen.
 */
void DialogErster::updateText()
{
    text = ui->edtText->text();
}
