#ifndef CONTROLLERINT_H
#define CONTROLLERINT_H

#include "controllerpunkt.h"

class ControllerInt : public ControllerPunkt
{
public:
    ControllerInt();
    ControllerInt(int zahl1, int zahl2);
    int rechneAdd(int zahl1, int zahl2);
    void rechneSumme();
    int getSumme();
    int getQuotient();

private:
    int summe;
    int quotient;
    int zahl1;
    int zahl2;
};

#endif // CONTROLLERINT_H
