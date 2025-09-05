#ifndef LIB_SELECTIONSORT_BINSEARCH_H
#define LIB_SELECTIONSORT_BINSEARCH_H

#include <vector>
#include "lib_selectionSort_binSearch_global.h"
#include "beachlounger.h"
using namespace std;

class LIB_SELECTIONSORT_BINSEARCH_EXPORT Lib_selectionSort_binSearch
{
public:
    Lib_selectionSort_binSearch();
    // static const unsigned short maxCountLounger = 200;
    void sortArray();
    void sortLoungerAsc();
    BeachLounger::BeachLoungerType findEntryInArray(unsigned short val);
    void setArrayEntry(unsigned short pos, BeachLounger *val);
    BeachLounger *getArrayEntry(unsigned short pos);
    void importArrayLoungers(vector <BeachLounger *> *import);

private:
    vector<BeachLounger *>*arrayLoungers;

    BeachLounger::BeachLoungerType findEntryInArrayRec(unsigned short pos, unsigned short val);
};

#endif // LIB_SELECTIONSORT_BINSEARCH_H
