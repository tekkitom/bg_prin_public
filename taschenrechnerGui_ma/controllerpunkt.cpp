#include "controllerpunkt.h"

ControllerPunkt::ControllerPunkt() {}

void ControllerPunkt::rechneMul()
{
    produkt = zahl1 * zahl2;
}

void ControllerPunkt::rechneDiv()
{
    quotient = zahl1 / zahl2;
}

double ControllerPunkt::getProdukt()
{
    return produkt;
}

double ControllerPunkt::getQuotient()
{
    return quotient;
}
