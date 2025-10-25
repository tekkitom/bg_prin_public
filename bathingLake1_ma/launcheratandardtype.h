#ifndef LAUNCHERATANDARDTYPE_H
#define LAUNCHERATANDARDTYPE_H

#include <QString>

/**
 * @brief Basisklasse für Liege
 */
class LauncherStandardType
{
public:
    LauncherStandardType(unsigned long newInventoryNr);

    unsigned long getInventoryNr();
    QString serialize();

private:
    unsigned long inventoryNr;
    unsigned short leaseTime;
};

#endif // LAUNCHERATANDARDTYPE_H
