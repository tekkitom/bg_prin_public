#ifndef ASSOCIATION_H
#define ASSOCIATION_H

#include "member.h"
#include "patch.h"
#include <vector>
#include <QObject>

using namespace std;

class Association : public QObject
{
    Q_OBJECT

public:
    static const unsigned short maxCountMembersPatches = 1000;
    Association();
    ~Association();

    void ceatePatches();
    void newMember();

    bool assignBatchMember(unsigned short memberNr, unsigned short patchNr);
    vector<short> getMemberPatches(short memberNr);

public slots:
    QString getPatchQuality(short patchNr);
    short getFieldNr(short patchNr);

private:
    Patch* patches[maxCountMembersPatches];
    vector<Member*> members;
    short nextMemberNr;
};

#endif // ASSOCIATION_H
