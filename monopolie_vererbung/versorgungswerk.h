#ifndef VERSORGUNGSWERK_H
#define VERSORGUNGSWERK_H

#include "bahnhof.h"

class Versorgungswerk : Bahnhof
{
public:
    Versorgungswerk();
    void berechnePreis();
};

#endif // VERSORGUNGSWERK_H
