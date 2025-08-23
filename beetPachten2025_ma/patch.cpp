#include "patch.h"
/**
 * @brief defaultNr für PatchNr festlegen.
 */
short Patch::nextPatchNr = 1;

/**
 * @brief Konstruktor
 */
Patch::Patch() {
    patchNr = nextPatchNr++;
    field = 0;
    quality = Patch::goodQuality;
}

/**
 * @brief Konstruktor
 * @param field FelfNr
 */
Patch::Patch(short field) {
    patchNr = nextPatchNr++;
    this->field = field;
    quality = Patch::goodQuality;
}

short Patch::getPatchNr() const
{
    return patchNr;
}

short Patch::getField() const
{
    return field;
}

void Patch::setField(short newField)
{
    field = newField;
}

/**
 * @brief Abfrage der Qualitätsstufe. Umwandluhg int -> String
 * @return String der Qualitätsstufe.
 */
QString Patch::getQuality()
{
    QString retValue;
    switch(quality){
    case badQuality:
        retValue = "schlechter Boden";
        break;
    case prettyBadQuality:
        retValue = "halbwegs schlechter Boden";
        break;
    case prettyGoodQuality:
        retValue = "halbwegs guter Boden";
        break;
    case goodQuality:
        retValue = "guter Boden";
        break;
    case excelenteQuality:
        retValue = "sehr guter Boden";
        break;
    case none:
        retValue = "Bodenqualität unbekannt";
        break;
    }

    return retValue;
}
