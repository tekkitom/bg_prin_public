#include "controllerpunkt.h"

ControllerPunkt::ControllerPunkt()
{

}

ControllerPunkt::ControllerPunkt(double zahl1)
{
    this->zahl1 = zahl1;
}

void ControllerPunkt::rechneMul()
{
    produkt = zahl1 * zahl2;
}

void ControllerPunkt::rechneDiv()
{
    quotient = zahl1 / zahl2;
}

void ControllerPunkt::rechneDiv(double zahl1, double zahl2)
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
