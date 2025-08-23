#ifndef ASSOCIATION_H
#define ASSOCIATION_H

#include "member.h"
#include "patch.h"
#include <vector>

using namespace std;

class Association
{
public:
    static const unsigned short maxCountMembersPatches = 1000;
    Association();
    vector<Patch *> getListAllPatches() const;
    vector<Member*> getListAllMembers() const;

    void ceatePatches();
    void newMember();

    bool assignBatchMember(unsigned short memberNr, unsigned short patchNr);
    vector<short> getMemberPatches(short memberNr);

private:
    Patch* patches[maxCountMembersPatches];
    vector<Member*> members;
    short nextMemberNr;
};

#endif // ASSOCIATION_H
