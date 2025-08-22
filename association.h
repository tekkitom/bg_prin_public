#ifndef ASSOCIATION_H
#define ASSOCIATION_H

#include "member.h"
#include "patch.h"

class Association
{
public:
    static const unsigned short maxCountMembersPatches = 1000;
    Association();

private:
    Patch* patches[maxCountMembersPatches];
    Member* members[maxCountMembersPatches];
};

#endif // ASSOCIATION_H
