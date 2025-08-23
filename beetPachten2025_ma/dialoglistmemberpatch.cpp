#include "dialoglistmemberpatch.h"
#include "ui_dialoglistmemberpatch.h"

/**
 * @brief Konstruktor
 * @param association Objelt für Klasse Verein
 * @param parent GUI (Haupt-Widget)
 */
DialogListMemberPatch::DialogListMemberPatch(Association *association, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogListMemberPatch)
{
    ui->setupUi(this);
    this->association = association;
    connect(ui->btnFindMemberPatches, &QPushButton::clicked, this, &DialogListMemberPatch::findMemberPatches);
}

/**
 * @brief Destruktor
 */
DialogListMemberPatch::~DialogListMemberPatch()
{
    delete ui;
}

/**
 * @brief Liste der Beete des Mitglieds anzeigen.
 */
void DialogListMemberPatch::findMemberPatches(){
    short memberNr = -1;
    vector<short> patches;

    memberNr = ui->edtMemberNr->value();
    patches = association->getMemberPatches(memberNr);
    ui->edtPatchList->clear();
    for(short p : patches){
        ui->edtPatchList->appendPlainText(QString::number(p));
    }
}
