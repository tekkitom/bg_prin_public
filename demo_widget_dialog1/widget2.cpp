#include "widget2.h"
#include "ui_widget2.h"

/**
 * @brief Konstruktor
 * @param parent für QWidget
 *
 * verknüpft die UI mit dem lokalen Methoden
 */
Widget2::Widget2(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget2)
{
    ui->setupUi(this);
    connect(ui->btnShowDialogErster, &QPushButton::clicked, this, &Widget2::showDialogErster);
    connect(ui->btnHideMe, &QPushButton::clicked, this, &Widget2::hideMe);
}

/**
 * @brief Destruktor
 */
Widget2::~Widget2()
{
    delete ui;
}

/**
 * @brief Abfrage vom Pointer auf Dialog
 * @return
 */
DialogErster *Widget2::getDialogErster() const
{
    return dialogErster;
}

/**
 * @brief Setzen vom Pointer auf Dialog
 * @param newDialogErster Pointer auf Objekt
 */
void Widget2::setDialogErster(DialogErster *newDialogErster)
{
    dialogErster = newDialogErster;
}

/**
 * @brief Dialog anzeigen
 */
void Widget2::showDialogErster()
{
    QString text2;

    dialogErster->exec();
    text2 = dialogErster->getText();
    ui->edtLog->appendPlainText(text2);
}

/**
 * @brief Fenter verbergen
 *
 * Das Objekt wird nicht gelöscht.
 */
void Widget2::hideMe()
{
    this->hide();
}
