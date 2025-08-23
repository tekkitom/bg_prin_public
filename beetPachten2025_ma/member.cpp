#include "member.h"
#include "patch.h"

Member::Member(short memberNr) {
    for(unsigned short i = 0; i < maxCountPatchesByMember; i++)
        myPatches[i] = -1;

    this->memberNr = memberNr;
}

bool Member::istPatchInUse(short patchNr)
{
    for(unsigned short i = 0; i < maxCountPatchesByMember; ++i)
        if(myPatches[i] == patchNr)
            return true;

    return false;
}

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

vector<short> Member::getMyPatcesNrs(){
    vector<short> tempPatchList;

    for(unsigned short i = 0; i < maxCountPatchesByMember; i++)
        if(-1 != myPatches[i]){
            tempPatchList.push_back(myPatches[i]);
        }
    return tempPatchList;
}
