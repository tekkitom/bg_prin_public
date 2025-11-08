#include "modeldata.h"

ModelData::ModelData()
{
    fListStart = nullptr;
    rListStart = nullptr;
}

void ModelData::insertNewEntryFront(QString nameIn, QString telIn)
{
    Entry * newEntry = new Entry;

    newEntry->setName(nameIn);
    newEntry->setTelNr(telIn);

    if(nullptr == fListStart && nullptr == rListStart)
    {
        fListStart = newEntry;
        rListStart = newEntry;
    }
    else
    {
        if(nullptr != fListStart)
        {
            newEntry->setNext(fListStart);
            fListStart->setPrevious(newEntry);
            fListStart = newEntry;
            newEntry = nullptr;
        }
    }
}

void ModelData::insertNewEntryBack(QString nameIn, QString telIn)
{
    Entry * newEntry = new Entry;

    newEntry->setName(nameIn);
    newEntry->setTelNr(telIn);

    if(nullptr == fListStart && nullptr == rListStart)
    {
        fListStart = newEntry;
        rListStart = newEntry;
    }
    else
    {
        if(nullptr != rListStart)
        {
            newEntry->setPrevious(rListStart);
            rListStart->setNext(newEntry);
            rListStart = newEntry;
            newEntry = nullptr;
        }

        // while(nullptr != tempPtrToEntry1->getNext())
        // {
        //     tempPtrToEntry1 = tempPtrToEntry1->getNext();
        // }

        // if(nullptr != tempPtrToEntry1)
        // {
        //     tempPtrToEntry1->setNext(newEntry);
        // }
    }
}

void ModelData::insertNewEntryMidAfterCurrent(QString NameNach, QString nameIn, QString telIn)
{
    Entry * tempEntry1 = fListStart;
    Entry * newEntry = new Entry;

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
    }
}

void ModelData::insertNewEntryBeforeCurrent(QString nameVor, QString nameIn, QString telIn)
{
    Entry * tempEntry1 = fListStart;
    Entry * tempEntry2 = fListStart;
    Entry * newEntry = new Entry;

    newEntry->setName(nameIn);
    newEntry->setTelNr(telIn);

    while((nullptr != tempEntry1->getNext()) && (0 != tempEntry1->getName().compare(nameVor)))
    {
        tempEntry2 = tempEntry1;
        tempEntry1 = tempEntry1->getNext();
    }

    if(nullptr != tempEntry1)
    {
        newEntry->setNext(tempEntry1);
        tempEntry2->setNext(newEntry);
    }
}

bool ModelData::removeEntry(QString nameIn)
{
    Entry * tempEntry1 = fListStart;
    Entry * tempEntry2 = fListStart; //Vorgaenger

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
            if(rListStart == tempEntry1)
                rListStart = nullptr;
        }
        else
        {
            tempEntry2->setNext(tempEntry1->getNext());
            if(nullptr != tempEntry2->getNext())
                tempEntry2->getNext()->setPrevious(tempEntry2);
            else
                rListStart = tempEntry2;
        }
        delete tempEntry1;
        return true;
    }
    return false;
}

bool ModelData::changeEntry(QString nameAlt, QString nameNeu, QString telNeu)
{
    Entry * tempEntry1;

    tempEntry1 = findEntry(nameAlt);
    if( nullptr != tempEntry1)
    {
        tempEntry1->setName(nameNeu);
        tempEntry1->setTelNr(telNeu);
        return true;
    }
    return false;
}

Entry *ModelData::findEntry(QString nameIn) const
{
    Entry * tempEntry1 = fListStart;

    while((nullptr != tempEntry1) && (0 != tempEntry1->getName().compare(nameIn)))
    {
        tempEntry1 = tempEntry1->getNext();
    }
    return tempEntry1;
}

void ModelData::firstEntry(QString &name, QString &telNr)
{
    if( nullptr != fListStart)
    {
        name = fListStart->getName();
        telNr = fListStart->getTelNr();
    }
}

void ModelData::nextEntryForward(QString nameVorgaenger, QString &name, QString &telNr)
{
    Entry * tempEntry1 = findEntry(nameVorgaenger);

    if(nullptr != tempEntry1 && nullptr != tempEntry1->getNext())
    {
        tempEntry1 = tempEntry1->getNext();
    }

    if(nullptr != tempEntry1)
    {
        name = tempEntry1->getName();
        telNr = tempEntry1->getTelNr();
    }
}

