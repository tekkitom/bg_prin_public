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

    association = new Association();
}

GUI::~GUI()
{
    delete ui;
}

void GUI::showListPatches(){
    vector<Patch*> tempPatches;

    ui->listPatches->clear();
    tempPatches = association->getListAllPtches();
    if(tempPatches.size()>0)
        for(unsigned int i = 0; i < tempPatches.size(); i++)
            ui->listPatches->addItem(QString::number(tempPatches[i]->getPatchNr()));
}

void GUI::showListMembers(){

}
void GUI::assignPatchMember(){

}

void GUI::releasePatchMember(){

}
