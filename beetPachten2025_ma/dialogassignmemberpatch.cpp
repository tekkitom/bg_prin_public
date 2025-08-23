#include "dialogassignmemberpatch.h"
#include "ui_dialogassignmemberpatch.h"

DialogAssignMemberPatch::DialogAssignMemberPatch(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogAssignMemberPatch)
{
    ui->setupUi(this);
    connect(ui->edtMemberNr, &QSpinBox::valueChanged, this, &DialogAssignMemberPatch::setMemberNr);
    connect(ui->edtPatchNr, &QSpinBox::valueChanged, this, &DialogAssignMemberPatch::setPatchNr);
}

DialogAssignMemberPatch::~DialogAssignMemberPatch()
{
    delete ui;
}

short DialogAssignMemberPatch::getMemberNr() const
{
    return memberNr;
}

void DialogAssignMemberPatch::setMemberNr()
{
    memberNr = ui->edtMemberNr->value();
}

short DialogAssignMemberPatch::getPatchNr() const
{
    return patchNr;
}

void DialogAssignMemberPatch::setPatchNr()
{
    patchNr = ui->edtPatchNr->value();
}
