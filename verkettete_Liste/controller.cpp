#include "controller.h"

Controller::Controller() {
    myData = std::make_unique<ModelData>();
}

void Controller::goToFirstEntry()
{
    // QString name;
    // QString telNr;
    myData->firstEntry();
    // myData->getValuesCurrentEntry(name, telNr);
}

// void Controller::goToLastEntry()
// {

// }

void Controller::stepToNextEntryForward()
{
    myData->nextEntryForward();
}
void Controller::stepToNextEntryBackward()
{

}

bool Controller::getCurrentEntryValues(QString &name, QString &telNr)
{
    bool retValue = false;
    myData->getValuesCurrentEntry(name, telNr);
    return retValue;
}

bool Controller::insertNewEntryFront(QString nameIn, QString telIn)
{
    bool retValue = false;

    retValue = myData->insertNewEntryFront(nameIn, telIn);
    return retValue;
}

bool Controller::insertNewEntryBack(QString name, QString telNr)
{
    bool retValue = false;

    retValue = myData->insertNewEntryBack(name, telNr);
    return retValue;
}

bool Controller::insertNewEntryMidAfterCurrent(QString nameNach, QString nameIn, QString telIn)
{
    bool retValue = false;

    retValue = myData->insertNewEntryMidAfterCurrent(nameNach, nameIn, telIn);
    return retValue;
}

bool Controller::insertNewEntryBeforeCurrent(QString nameVor, QString nameIn, QString telIn)
{
    bool retValue = false;

    retValue = myData->insertNewEntryBeforeCurrent(nameVor, nameIn, telIn);
    return retValue;
}

bool Controller::removeEntry(QString nameIn)
{
    bool retValue = false;

    retValue = myData->removeEntry(nameIn);
    return retValue;
}

bool Controller::changeEntry(QString nameAlt, QString nameNeu, QString telNeu)
{
    bool retValue = false;

    retValue = myData->changeEntry(nameAlt, nameNeu, telNeu);
    return retValue;
}


