#include "controllerlake.h"

ControllerLake::ControllerLake() : inventarNrGlobal (1){}


void ControllerLake::createLauncherStandardType(){
    LauncherStandardType *tempLauncher = nullptr;

    tempLauncher = new LauncherStandardType(inventarNrGlobal++);
    launcherStandardType.push_back(tempLauncher);
}
