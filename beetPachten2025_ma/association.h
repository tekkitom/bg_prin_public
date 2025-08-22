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
    vector<Patch *> getListAllPtches() const;
    vector<Member*> getListAllMembers() const;

private:
    Patch* patches[maxCountMembersPatches];
    Member* members[maxCountMembersPatches];
};

#endif // ASSOCIATION_H
