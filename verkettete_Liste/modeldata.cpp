#include "modeldata.h"

ModelData::ModelData()
{
    fListStart = nullptr;
    currentEntry = nullptr;
}

bool ModelData::getValuesCurrentEntry(QString &name, QString &telNr)
{
    bool retValue = false;
    if(currentEntry)
    {
        name = currentEntry->getName();
        telNr = currentEntry->getTelNr();
    }
    return retValue;
}

void ModelData::firstEntry()
{
    currentEntry = fListStart;
}

bool ModelData::insertNewEntryFront(QString nameIn, QString telIn)
{
    Entry * newEntry = new Entry;
    bool retValue = false;

    newEntry->setName(nameIn);
    newEntry->setTelNr(telIn);

    if(nullptr == fListStart)
    {
        fListStart = newEntry;
        retValue = true;
    }
    else
    {
        if(nullptr != fListStart)
        {
            newEntry->setNext(fListStart);
            fListStart->setPrevious(newEntry);
            fListStart = newEntry;
            newEntry = nullptr;
            retValue = true;
        }
    }

    return retValue;
}

bool ModelData::insertNewEntryBack(QString nameIn, QString telIn)
{
    Entry * newEntry = new Entry;
    bool retValue = false;

    newEntry->setName(nameIn);
    newEntry->setTelNr(telIn);

    if(nullptr == fListStart)
    {
        fListStart = newEntry;
        retValue = true;
    }
    else
    {
        currentEntry = fListStart;

        while(nullptr != currentEntry->getNext())
        {
            currentEntry = currentEntry->getNext();
        }

        if(nullptr != currentEntry)
        {
            currentEntry->setNext(newEntry);
        }
    }

    return retValue;
}

bool ModelData::insertNewEntryMidAfterCurrent(QString NameNach, QString nameIn, QString telIn)
{
    Entry * tempEntry1 = fListStart;
    Entry * newEntry = new Entry;
    bool retValue = false;

    newEntry->setName(nameIn);
    newEntry->setTelNr(telIn);

    while((nullptr != tempEntry1->getNext()) && (0 != tempEntry1->getName().compare(NameNach)))
    {
        tempEntry1 = tempEntry1->getNext();
    }

    if(nullptr != tempEntry1)
    {
        newEntry->setNext(tempEntry1->getNext());
        tempEntry1->setNext(newEntry);
        retValue = true;
    }
    return retValue;
}

bool ModelData::insertNewEntryBeforeCurrent(QString nameVor, QString nameIn, QString telIn)
{
    Entry * tempEntry2 = fListStart;
    Entry * newEntry = new Entry;
    bool retValue = false;

    newEntry->setName(nameIn);
    newEntry->setTelNr(telIn);

    currentEntry = fListStart;

    if(!fListStart)
    {
        fListStart = newEntry;
        currentEntry = fListStart;
        retValue = true;
    }
    else{
        while((nullptr != currentEntry->getNext())
               && (0 != currentEntry->getName().compare(nameVor)))
        {
            tempEntry2 = currentEntry;
            currentEntry = currentEntry->getNext();
        }

        if(nullptr != currentEntry)
        {
            newEntry->setNext(currentEntry);
            if(fListStart != tempEntry2)
                tempEntry2->setNext(newEntry);
            else
                fListStart = newEntry;
            retValue = true;
        }
    }
    return retValue;
}

bool ModelData::removeEntry(QString nameIn)
{
    Entry * tempEntry1 = fListStart;
    Entry * tempEntry2 = fListStart; //Vorgaenger
    bool retValue = false;

    while((nullptr != tempEntry1) && (0 != tempEntry1->getName().compare(nameIn)))
    {
        tempEntry2 = tempEntry1;
        tempEntry1 = tempEntry1->getNext();
    }

    if(nullptr != tempEntry1)
    {
        if(fListStart == tempEntry1)
        {
            fListStart = tempEntry1->getNext();
            if(nullptr != fListStart)
                fListStart->setPrevious(nullptr);
        }
        else
        {
            tempEntry2->setNext(tempEntry1->getNext());
            if(nullptr != tempEntry2->getNext())
                tempEntry2->getNext()->setPrevious(tempEntry2);
        }
        delete tempEntry1;
        currentEntry = nullptr;
        retValue = true;
    }
    return retValue;
}

bool ModelData::changeEntry(QString nameAlt, QString nameNeu, QString telNeu)
{
    Entry * tempEntry1;
    bool retValue = false;

    tempEntry1 = const_cast<Entry *>(findEntry(nameAlt));
    if( nullptr != tempEntry1)
    {
        tempEntry1->setName(nameNeu);
        tempEntry1->setTelNr(telNeu);
        retValue = true;
    }
    currentEntry = tempEntry1;
    return retValue;
}

const Entry *ModelData::findEntry(QString nameIn)
{
    Entry *tempEntry1 = fListStart;

    while((nullptr != tempEntry1) && (0 != tempEntry1->getName().compare(nameIn)))
    {
        tempEntry1 = tempEntry1->getNext();
        currentEntry = tempEntry1;
    }
    return tempEntry1;
}


void ModelData::nextEntryForward()
{
    if(!currentEntry)
        currentEntry = fListStart;

    if(nullptr != currentEntry && nullptr != currentEntry->getNext())
        currentEntry = currentEntry->getNext();
}
