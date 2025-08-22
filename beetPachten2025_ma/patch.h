#ifndef PATCH_H
#define PATCH_H

class Patch
{
public:
    Patch();

    static short nextNr;
    enum qualType{badQuality, prettyBadQuality, prettyGoodQuality, goodQuality, excelenteQuality, none = -1};

    short getPatchNr() const;

    short getField() const;
    void setField(short newField);

private:
    short patchNr;
    qualType quality;

    short field;
};



#endif // PATCH_H
