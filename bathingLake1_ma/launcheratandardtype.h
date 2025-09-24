#ifndef LAUNCHERATANDARDTYPE_H
#define LAUNCHERATANDARDTYPE_H

/**
 * @brief Basisklasse für Liege
 */
class LauncherStandardType
{
public:
    LauncherStandardType(unsigned long newInventarNr);

    unsigned long getInventarNr();

private:
    unsigned long inventarNr;
};

#endif // LAUNCHERATANDARDTYPE_H
