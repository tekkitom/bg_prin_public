#include "association.h"

Association::Association() {
    for (int i = 0; i < maxCountMembersPatches; ++i) {
        patches[i] = nullptr;
    }
    nextMemberNr = 1;
}

vector<Patch*> Association::getListAllPatches() const{
    vector<Patch*> tempPatches;

    for(int i = 0; i < maxCountMembersPatches; ++i){
        if(nullptr != patches[i])
            tempPatches.push_back(patches[i]);
    }

    return tempPatches;
}

vector<Member*> Association::getListAllMembers() const{
    vector<Member*> tempMembers;

    for(Member *tM : members){
        if(nullptr != tM)
            tempMembers.push_back(tM);
    }

    return tempMembers;
}

bool Association::assignBatchMember(unsigned short memberNr, unsigned short patchNr){
    Member *tempMember = nullptr;

    for (Member *tM : members) {
        if(nullptr != tM){
            if(tM->istPatchInUse(patchNr)){
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

vector<short> Association::getMemberPatches(short memberNr){
    vector<short> patchList;
    for (Member *tM : members) {
        if(nullptr != tM){
            patchList = tM->getMyPatcesNrs();
        }
    }
    return patchList;
}

void Association::ceatePatches(){
    for(int i = 0; i < maxCountMembersPatches; ++i)
        patches[i] = new Patch;
}

void Association::newMember(){
    Member *tempMember = nullptr;

    tempMember = new Member(nextMemberNr++);
    members.push_back(tempMember);
    return;
}
