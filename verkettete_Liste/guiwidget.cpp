#include "guiwidget.h"
#include "ui_guiwidget.h"

GuiWidget::GuiWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    myController = std::make_unique<Controller>();
    connect(ui->btnAppend, &QPushButton::clicked, this, &GuiWidget::appendEntry);
    connect(ui->btnPrepend, &QPushButton::clicked, this, &GuiWidget::prependEntry);
}

GuiWidget::~GuiWidget()
{
    delete ui;
}

void GuiWidget::on_btnGoToStart_clicked()
{
    QString name;
    QString telNr;

    myController->goToFirstEntry();
    myController->getCurrentEntryValues(name, telNr);
    ui->edtNameCurrent->setText(name);
    ui->edtTelNrCurrent->setText(telNr);
}

void GuiWidget::on_btnNextEntry_clicked()
{
    QString name = ui->edtNameCurrent->text();
    QString telNr;

    myController->stepToNextEntryForward();
    myController->getCurrentEntryValues(name, telNr);
    ui->edtNameCurrent->setText(name);
    ui->edtTelNrCurrent->setText(telNr);
}

void GuiWidget::appendEntry()
{
    myController->insertNewEntryBack(ui->edtNameNew->text(), ui->edtTelNrNew->text());
}

void GuiWidget::prependEntry()
{
    myController->insertNewEntryFront(ui->edtNameNew->text(), ui->edtTelNrNew->text());
}


void GuiWidget::on_btnInsertBefore_clicked()
{
    myController->insertNewEntryBeforeCurrent(ui->edtNameCurrent->text(), ui->edtNameNew->text(), ui->edtTelNrNew->text());
}

void GuiWidget::on_btnInsertAfter_clicked()
{
    myController->insertNewEntryMidAfterCurrent(ui->edtNameCurrent->text(), ui->edtNameNew->text(), ui->edtTelNrNew->text());
}

void GuiWidget::on_btnUpdate_clicked()
{
    myController->changeEntry(ui->edtNameCurrent->text(), ui->edtNameNew->text(), ui->edtTelNrNew->text());
}

void GuiWidget::on_btnRemove_clicked()
{
    myController->removeEntry(ui->edtNameCurrent->text());
    on_btnGoToStart_clicked();
}
