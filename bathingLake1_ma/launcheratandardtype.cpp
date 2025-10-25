#include "launcheratandardtype.h"

LauncherStandardType::LauncherStandardType(unsigned long newInventoryNr) : inventoryNr (newInventoryNr){}


QString LauncherStandardType::serialize()
{
    QString retValue;
    retValue = "Liege Typ standard, Nr: " + QString::number(inventoryNr);
    retValue.append(" Zustand: neuwertig, gebucht: ") + QString::number(leaseTime);

    return retValue;
}


unsigned long LauncherStandardType::getInventoryNr()
{
    return inventoryNr;
}

