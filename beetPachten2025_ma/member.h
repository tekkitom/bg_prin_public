#ifndef MEMBER_H
#define MEMBER_H
#include <vector>
#include "patch.h"

using namespace std;

class Member
{
public:
    static const unsigned int maxCountPatchesByMember = 10;

    Member(short memberNr);
    bool istPatchInUse(short patchNr);
    bool assignPatchNr(const short patchNr);

    short getMemberNr() const;
    vector<short> getMyPatcesNrs();

private:
    short myPatches[maxCountPatchesByMember];
    short memberNr;
};

#endif // MEMBER_H
