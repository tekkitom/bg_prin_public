#include "gui.h"
#include "ui_gui.h"

GUI::GUI(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::GUI)
{
    ui->setupUi(this);

    connect(ui->btnAssignPatch, &QPushButton::clicked, this, &GUI::assignPatchMember);
    connect(ui->btnReleasePatch, &QPushButton::clicked, this, &GUI::releasePatchMember);
    connect(ui->btnGetListPatches, &QPushButton::clicked, this, &GUI::showListPatches);
    connect(ui->btnCreatePatches, &QPushButton::clicked, this, &GUI::ceatePatches);
    connect(ui->btnNewMember, &QPushButton::clicked, this, &GUI::newMember);
    connect(ui->btnShowMemberPatches, &QPushButton::clicked, this, &GUI::showMemberPatches);

    association = new Association();
    dialogListMemberPatch = nullptr;
    dialogAssignMemberPatch = nullptr;
}

GUI::~GUI()
{
    delete ui;
}

void GUI::showListPatches(){
    vector<Patch*> tempPatches;
    QString tempText;

    ui->listPatches->clear();
    tempPatches = association->getListAllPatches();
    if(tempPatches.size()>0)
        for(unsigned int i = 0; i < tempPatches.size(); i++){
            tempText = QString::number(tempPatches[i]->getPatchNr());
            tempText.append(" ");
            tempText.append(tempPatches[i]->getQuality());
            ui->listPatches->addItem(tempText);
        }
}

void GUI::showListMembers(){

}
void GUI::assignPatchMember(){
    dialogAssignMemberPatch = new DialogAssignMemberPatch(this);
    short tempMemberNr = -1;
    short tempPatchNr = -1;

    if(dialogAssignMemberPatch->exec()){
        tempMemberNr = dialogAssignMemberPatch->getMemberNr();
        tempPatchNr = dialogAssignMemberPatch->getPatchNr();

        association->assignBatchMember(tempMemberNr, tempPatchNr);
    }

    delete dialogAssignMemberPatch;
    dialogAssignMemberPatch = nullptr;
}

void GUI::releasePatchMember(){

}

void GUI::ceatePatches(){
    association->ceatePatches();
}

void GUI::newMember(){
    association->newMember();
}

void GUI::showMemberPatches(){
    if(nullptr == dialogListMemberPatch)
        dialogListMemberPatch = new DialogListMemberPatch(association, this);

    dialogListMemberPatch->show();
}
