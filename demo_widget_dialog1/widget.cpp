#include "widget.h"
#include "ui_widget.h"

/**
 * @brief Konstruktor
 * @param parent für QWidget
 *
 * zentrales Setup für das Programm. Legt Objekte für Dialog und Widget 2 an.
 *
 * Verbindet die UI mit den Methoden. btnHideWidget2 von Widget 1 ruft die Methode in Widget 2 direkt auf.
 */
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

/**
 * @brief Destruktor
 *
 * löscht die Objekte
 */
Widget::~Widget()
{
    delete dialogErster;
    delete widget2;
    delete ui;
}

/**
 * @brief Dialogaufruf - modal
 *
 * Der Dialog blockiert alle Fenster des Programms
 */
void Widget::callDialogErsterModal()
{
    QString text2;

    dialogErster->exec();
    text2 = dialogErster->getText();
    ui->edtLog->appendPlainText(text2);
}

/**
 * @brief Dialogaufruf - non modal
 *
 * Der Dialog blockiert die anderen Fenster nicht.
 */
void Widget::callDialogErsterNonModal()
{
    QString text2;

    dialogErster->show();
    text2 = dialogErster->getText();
    ui->edtLog->appendPlainText(text2);
}

/**
 * @brief Text aus Dialog holen und anzeigen
 */
void Widget::getTextFromDialogErster()
{
    QString text2;

    text2 = dialogErster->getText();
    ui->edtLog->appendPlainText(text2);
}

/**
 * @brief Anzeige Widget 2
 */
void Widget::showWidget2()
{
    widget2->show();
}
