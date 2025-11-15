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
    void firstEntry();
    void nextEntryForward();
private:
    const Entry *findEntry(QString nameIn);

    Entry *fListStart;
    Entry *currentEntry;
};

#endif // MODELDATA_H
