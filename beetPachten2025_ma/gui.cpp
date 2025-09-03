#include "gui.h"
#include "ui_gui.h"

/**
 * @brief Konstruktor
 * @param parent (leer)
 */
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

/**
 * @brief Destruktor
 */
GUI::~GUI()
{
    delete ui;
}

/**
 * @brief Liste der Beete anzeigen.
 */
void GUI::showListPatches(){
    // vector<Patch*> tempPatches;
    QString tempText;

    ui->listPatches->clear();
    //tempPatches = association->getListAllPatches();

    for(short patchNr = 0; patchNr < Association::maxCountMembersPatches; patchNr++){
        tempText = QString::number(patchNr);
        tempText.append(" ");
        tempText.append(association->getPatchQuality(patchNr));
        ui->listPatches->addItem(tempText);
    }
}

/**
 * @brief Liste der Mitgleider anzeigen (noch leer)
 */
void GUI::showListMembers(){

}

/**
 * @brief Dialog "Beet pachten" anzeigen
 */
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

/**
 * @brief Pacht stornieren (noch leer).
 */
void GUI::releasePatchMember(){

}

/**
 * @brief Beete anlegen.
 */
void GUI::ceatePatches(){
    association->ceatePatches();
}

/**
 * @brief Ein Mitglied anlegen.
 */
void GUI::newMember(){
    association->newMember();
}

/**
 * @brief Dialog "Liste der Beete eines Mitglieds" anzeigen.
 */
void GUI::showMemberPatches(){
    if(nullptr == dialogListMemberPatch)
        dialogListMemberPatch = new DialogListMemberPatch(association, this);

    dialogListMemberPatch->show();
}
