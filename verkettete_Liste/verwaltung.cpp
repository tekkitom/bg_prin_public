#include "verwaltung.h"

Verwaltung::Verwaltung()
{
    fListStart = nullptr;
    rListStart = nullptr;
}

void Verwaltung::elementVorneAnhaengen(QString nameIn, QString telIn)
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

void Verwaltung::elementHintenAnhaengen(QString nameIn, QString telIn)
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

void Verwaltung::elementEinfuegenNachAktuellem(QString NameNach, QString nameIn, QString telIn)
{
    Entry * tempPtrToEntry1 = fListStart;
    Entry * newEntry = new Entry;

    newEntry->setName(nameIn);
    newEntry->setTelNr(telIn);

    while((nullptr != tempPtrToEntry1->getNext()) && (0 != tempPtrToEntry1->getName().compare(NameNach)))
    {
        tempPtrToEntry1 = tempPtrToEntry1->getNext();
    }

    if(nullptr != tempPtrToEntry1)
    {
        newEntry->setNext(tempPtrToEntry1->getNext());
        tempPtrToEntry1->setNext(newEntry);
    }
}

void Verwaltung::elementEinfuegenVorAktuellem(QString NameVor, QString nameIn, QString telIn)
{

}

bool Verwaltung::elementLoeschen(QString nameIn)
{
    Entry * tempPtrToEntry1 = fListStart;
    Entry * tempPtrToEntry2 = fListStart; //Vorgaenger

    while((nullptr != tempPtrToEntry1) && (0 != tempPtrToEntry1->getName().compare(nameIn)))
    {
        tempPtrToEntry2 = tempPtrToEntry1;
        tempPtrToEntry1 = tempPtrToEntry1->getNext();
    }

    if(nullptr != tempPtrToEntry1)
    {
        if(fListStart == tempPtrToEntry1)
        {
            fListStart = tempPtrToEntry1->getNext();
            if(nullptr != fListStart)
                fListStart->setPrevious(nullptr);
            if(rListStart == tempPtrToEntry1)
                rListStart = nullptr;
        }
        else
        {
            tempPtrToEntry2->setNext(tempPtrToEntry1->getNext());
            if(nullptr != tempPtrToEntry2->getNext())
                tempPtrToEntry2->getNext()->setPrevious(tempPtrToEntry2);
            else
                rListStart = tempPtrToEntry2;
        }
        delete tempPtrToEntry1;
        return true;
    }
    return false;
}

bool Verwaltung::elementAendern(QString nameAlt, QString nameNeu, QString telNeu)
{
    Entry * tempPtrToEntry1;

    tempPtrToEntry1 = elementSuchen(nameAlt);
    if( nullptr != tempPtrToEntry1)
    {
        tempPtrToEntry1->setName(nameNeu);
        tempPtrToEntry1->setTelNr(telNeu);
        return true;
    }
    return false;
}

Entry *Verwaltung::elementSuchen(QString nameIn) const
{
    Entry * tempPtrToEntry1 = fListStart;

    while((nullptr != tempPtrToEntry1) && (0 != tempPtrToEntry1->getName().compare(nameIn)))
    {
        tempPtrToEntry1 = tempPtrToEntry1->getNext();
    }
    return tempPtrToEntry1;
}

void Verwaltung::erstesElement(QString &name, QString &telNr)
{
    if( nullptr != fListStart)
    {
        name = fListStart->getName();
        telNr = fListStart->getTelNr();
    }
}

void Verwaltung::elementVor(QString nameVorgaenger, QString &name, QString &telNr)
{
    Entry * tempPtrToEntry1 = elementSuchen(nameVorgaenger);

    if(nullptr != tempPtrToEntry1 && nullptr != tempPtrToEntry1->getNext())
    {
        tempPtrToEntry1 = tempPtrToEntry1->getNext();
    }

    if(nullptr != tempPtrToEntry1)
    {
        name = tempPtrToEntry1->getName();
        telNr = tempPtrToEntry1->getTelNr();
    }
}

