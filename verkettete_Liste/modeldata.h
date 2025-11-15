#ifndef MODELDATA_H
#define MODELDATA_H

#include "element.h"

class ModelData
{
public:
    ModelData();

    bool getValuesCurrentEntry(QString &name, QString &telNr);
    bool insertNewEntryBack(QString nameIn, QString telIn);
    bool insertNewEntryFront(QString nameIn, QString telIn);
    bool insertNewEntryMidAfterCurrent(QString NameNach, QString nameIn, QString telIn);
    bool insertNewEntryBeforeCurrent(QString nameVor, QString nameIn, QString telIn);

    bool removeEntry(QString nameIn);
    bool changeEntry(QString nameAlt, QString nameNeu, QString telNeu);
    void firstEntry();//QString &name, QString &telNr);
    void nextEntryForward();//QString nameVorgaenger, QString &name, QString &telNr);
private:
    const Entry *findEntry(QString nameIn);

    Entry *fListStart;
    // Entry *rListStart;
    Entry *currentEntry;
};

#endif // MODELDATA_H
