#include "controllerlake.h"
#include "qcontainerfwd.h"

ControllerLake::ControllerLake() : inventarNrGlobal (1){}


void ControllerLake::createLauncherStandardType(){
    LauncherStandardType *tempLauncher = nullptr;

    tempLauncher = new LauncherStandardType(inventarNrGlobal++);
    launcherStandardType.push_back(tempLauncher);
}

QStringList ControllerLake::getListLaunchers(){
    QStringList retValue;
    QString itemString;

    for(LauncherStandardType *i : launcherStandardType){
        itemString = i->serialize();
        retValue.append(itemString);
    }
    return retValue;
}
