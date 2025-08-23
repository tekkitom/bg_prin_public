#include "association.h"

/**
 * @brief Konstruktor
 */
Association::Association() {
    for (int i = 0; i < maxCountMembersPatches; ++i) {
        patches[i] = nullptr;
    }
    nextMemberNr = 1;
}

/**
 * @brief Liste aller Beete heraussuchen.
 * @return Liste aller Beete
 */
vector<Patch*> Association::getListAllPatches() const{
    vector<Patch*> tempPatches;

    for(int i = 0; i < maxCountMembersPatches; ++i){
        if(nullptr != patches[i])
            tempPatches.push_back(patches[i]);
    }

    return tempPatches;
}

/**
 * @brief Liste aller Vereinsmitglieder heraussuchen.
 * @return Liste aller Vereinsmitglieder
 */
vector<Member*> Association::getListAllMembers() const{
    vector<Member*> tempMembers;

    for(Member *tM : members){
        if(nullptr != tM)
            tempMembers.push_back(tM);
    }

    return tempMembers;
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
