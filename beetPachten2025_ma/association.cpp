#include "association.h"

Association::Association() {
    for (int i = 0; i < maxCountMembersPatches; ++i) {
        members[i] = nullptr;
        patches[i] = nullptr;
    }
}

vector<Patch*> Association::getListAllPtches() const{
    vector<Patch*> tempPatches;

    for(int i = 0; i < maxCountMembersPatches; ++i){
        if(nullptr != patches[i])
            tempPatches.push_back(patches[i]);
    }

    return tempPatches;
}

vector<Member*> Association::getListAllMembers() const{
    vector<Member*> tempMembers;

    for(int i = 0; i < maxCountMembersPatches; ++i){
        if(nullptr != members[i])
            tempMembers.push_back(members[i]);
    }

    return tempMembers;
}
