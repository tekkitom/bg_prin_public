#ifndef MODELDATA_H
#define MODELDATA_H

#include "element.h"

class ModelData
{
public:
    ModelData();

    void insertNewEntryBack(QString nameIn, QString telIn);
    void insertNewEntryFront(QString nameIn, QString telIn);
    void insertNewEntryMidAfterCurrent(QString NameNach, QString nameIn, QString telIn);
    void insertNewEntryBeforeCurrent(QString nameVor, QString nameIn, QString telIn);

    bool removeEntry(QString nameIn);
    bool changeEntry(QString nameAlt, QString nameNeu, QString telNeu);
    void firstEntry(QString &name, QString &telNr);
    void nextEntryForward(QString nameVorgaenger, QString &name, QString &telNr);
private:
    Entry * findEntry(QString nameIn) const;

    Entry * fListStart;
    Entry * rListStart;
};

#endif // MODELDATA_H
