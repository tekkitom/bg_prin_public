#include "controllerexponential.h"

ControllerExponential::ControllerExponential() {}

void ControllerExponential::rechnePotenzfunktion()
{
    ergebnisPotenzfunktion = pow(zahl1, zahl2);
}

void ControllerExponential::rechneWurzel()
{
    ergebnisWurzel = sqrt(zahl1);
}

double ControllerExponential::getErgebnisWurzel()
{
    return ergebnisWurzel;
}

double ControllerExponential::getErgebnisPotenzfunktion()
{
    return ergebnisPotenzfunktion;
}
