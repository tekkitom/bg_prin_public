#include "launcheratandardtype.h"

LauncherStandardType::LauncherStandardType(unsigned long newInventarNr) : inventarNr (newInventarNr){}

unsigned long LauncherStandardType::getInventarNr()
{
    return inventarNr;
}
