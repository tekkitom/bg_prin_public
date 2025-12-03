#include "entry.h"

Entry::Entry() {}

int Entry::getValue() const
{
    return value;
}

void Entry::setValue(int newValue)
{
    value = newValue;
}
