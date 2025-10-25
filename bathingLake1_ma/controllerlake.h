#ifndef CONTROLLERLAKE_H
#define CONTROLLERLAKE_H

#include <vector>
#include <QStringList>
#include "launcheratandardtype.h"

using namespace std;

class ControllerLake
{
public:
    ControllerLake();
    void createLauncherStandardType();
    QStringList getListLaunchers();

private:

    vector<LauncherStandardType *> launcherStandardType;
    unsigned long inventarNrGlobal;
};

#endif // CONTROLLERLAKE_H
