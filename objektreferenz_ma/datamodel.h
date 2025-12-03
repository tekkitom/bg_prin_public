#ifndef DATAMODEL_H
#define DATAMODEL_H

#include "entry.h"

class DataModel
{
public:
    DataModel();
    static const unsigned short arraySizeEntry = 20;
    void insertEntry(int pos, int val);
    void removeEntry(int pos);
    int findEntryPos(int pos);
    int findEntryVal(int val);
    bool appendEntryBack(int val);

private:
    Entry* entryAray[arraySizeEntry];///< Links auf die Objekte in der Warteschlange.
};

#endif // DATAMODEL_H
