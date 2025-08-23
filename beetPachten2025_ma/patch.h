#ifndef PATCH_H
#define PATCH_H

#include <QString>

class Patch
{
public:
    enum qualType{badQuality, prettyBadQuality, prettyGoodQuality, goodQuality, excelenteQuality, none = -1};

    Patch();
    Patch(short field);

    short getPatchNr() const;
    short getField() const;
    void setField(short newField);
    QString getQuality();

private:
    short patchNr;
    static short nextPatchNr;
    qualType quality;

    short field;
};



#endif // PATCH_H
