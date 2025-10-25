#ifndef CONTROLLERPUNKT_H
#define CONTROLLERPUNKT_H

#include "controllerstrich.h"

class ControllerPunkt : public ControllerStrich
{
public:
    ControllerPunkt();
    void rechneMul();
    void rechneDiv();
    double getProdukt();
    double getQuotient();

private:
    double produkt;
    double quotient;
};

#endif // CONTROLLERPUNKT_H
