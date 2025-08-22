#include "patch.h"

short Patch::nextNr = 1;

Patch::Patch() {
    patchNr = nextNr++;
    field = 0;
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
