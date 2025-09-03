#ifndef MEMBER_H
#define MEMBER_H
#include <vector>
#include "patch.h"

using namespace std;

class Member
{
public:
    static const unsigned int maxCountPatchesByMember = 10;

    Member();
    Member(short memberNr);
    bool isPatchInUse(short patchNr);
    bool assignPatchNr(const short patchNr);

    short getMemberNr() const;
    vector<short> getMyPatcesNrs();

private:
    short myPatches[maxCountPatchesByMember];
    short memberNr;

    static short nextMemberNr;
};

#endif // MEMBER_H
