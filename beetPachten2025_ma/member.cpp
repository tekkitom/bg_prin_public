#include "member.h"
#include "patch.h"

/**
 * @brief Konstruktor
 * @param memberNr MitgliedsNr
 */
Member::Member(short memberNr) {
    for(unsigned short i = 0; i < maxCountPatchesByMember; i++)
        myPatches[i] = -1;

    this->memberNr = memberNr;
}

/**
 * @brief Abfrage, ob Beet gepachtet ist
 * @param patchNr BeetNr
 * @return wenn belegt: true
 */
bool Member::isPatchInUse(short patchNr)
{
    for(unsigned short i = 0; i < maxCountPatchesByMember; ++i)
        if(myPatches[i] == patchNr)
            return true;

    return false;
}

/**
 * @brief Beet pachten
 * @param patchNr Beet Nr
 * @return true = hat geklappt.
 */
bool Member::assignPatchNr(const short patchNr){
    for(unsigned short i = 0; i < maxCountPatchesByMember; i++)
        if(-1 == myPatches[i]){
            myPatches[i] = patchNr;
            return true;
        }
    return false;
}

short Member::getMemberNr() const
{
    return memberNr;
}

/**
 * @brief Liste der Beete heraussuchen.
 * @return
 */
vector<short> Member::getMyPatcesNrs(){
    vector<short> tempPatchList;

    for(unsigned short i = 0; i < maxCountPatchesByMember; i++)
        if(-1 != myPatches[i]){
            tempPatchList.push_back(myPatches[i]);
        }
    return tempPatchList;
}
