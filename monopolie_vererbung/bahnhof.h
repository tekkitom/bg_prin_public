#ifndef BAHNHOF_H
#define BAHNHOF_H

#include "spielfeld.h"

class Bahnhof : public Spielfeld
{
public:
    Bahnhof();
    void berechnePreis();
};

#endif // BAHNHOF_H
