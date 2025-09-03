#include "association.h"

/**
 * @brief Konstruktor
 */
Association::Association() : QObject() {
    for (int i = 0; i < maxCountMembersPatches; ++i) {
        patches[i] = nullptr;
    }
    nextMemberNr = 1;
}

Association::~Association(){

}

/**
 * @brief Bodenqualität des Beets zurück geben
 * @param patchNr BeetNr
 * @return Qualitätsangebe als QString
 */
QString Association::getPatchQuality(short patchNr){
    for(short i = 0; i < maxCountMembersPatches; i++){
        if(patches[i]->getPatchNr() == patchNr)
            return patches[i]->getQuality();
    }
    return "";
}

/**
 * @brief Nummer des Felds, auf dem das Beet ist
 * @param patchNr BeetNr
 * @return FeldNr
 */
short Association::getFieldNr(short patchNr){
    for(short i = 0; i < maxCountMembersPatches; i++){
        if(patches[i]->getPatchNr() == patchNr)
            return patches[i]->getField();
    }
    return -1;
}

/**
 * @brief Beet pachten
 * @param memberNr Mitgliedsnummer
 * @param patchNr BeetNummer
 * @return true = hat funktioniert.
 */
bool Association::assignBatchMember(unsigned short memberNr, unsigned short patchNr){
    Member *tempMember = nullptr;

    for (Member *tM : members) {
        if(nullptr != tM){
            if(tM->isPatchInUse(patchNr)){
                return false;
            }
            else{
                if(tM->getMemberNr() == memberNr){
                    tempMember = tM;
                }
            }
        }
    }
    if(nullptr != tempMember){
        tempMember->assignPatchNr(patchNr);
        return true;
    }

    return false;
}

/**
 * @brief Liste aller Beete eines Mitglieds heraussuchen.
 * @param memberNr Mitgliedsnummer
 * @return Liste aller Beete eines Mitglieds
 */
vector<short> Association::getMemberPatches(short memberNr){
    vector<short> patchList;
    for (Member *tM : members) {
        if(nullptr != tM && tM->getMemberNr() == memberNr){
            patchList = tM->getMyPatcesNrs();
        }
    }
    return patchList;
}

/**
 * @brief Liste aller Beete vorbereiten.
 *
 * Liste aller Beete vorbereiten. Alle Beete bekommen default Werte zugeteilt.
 */
void Association::ceatePatches(){
    for(int i = 0; i < maxCountMembersPatches; ++i)
        patches[i] = new Patch;
}

/**
 * @brief ein Mitglied anlegen.
 */
void Association::newMember(){
    Member *tempMember = nullptr;

    tempMember = new Member(nextMemberNr++);
    members.push_back(tempMember);
    return;
}
