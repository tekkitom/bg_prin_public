#include "dialoglistmemberpatch.h"
#include "ui_dialoglistmemberpatch.h"

DialogListMemberPatch::DialogListMemberPatch(Association *association, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogListMemberPatch)
{
    ui->setupUi(this);
    this->association = association;
    connect(ui->btnFindMemberPatches, &QPushButton::clicked, this, &DialogListMemberPatch::findMemberPatches);
}

DialogListMemberPatch::~DialogListMemberPatch()
{
    delete ui;
}

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
