#ifndef CONTROLLERPUNKT_H
#define CONTROLLERPUNKT_H

#include "controllerstrich.h"

class ControllerPunkt : public ControllerStrich
{
public:
    ControllerPunkt();
    ControllerPunkt(double zahl1);
    void rechneMul();
    void rechneDiv();
    void rechneDiv(double zahl1, double zahl2);
    double getProdukt();
    double getQuotient();

private:
    double produkt;
    double quotient;
};

#endif // CONTROLLERPUNKT_H
