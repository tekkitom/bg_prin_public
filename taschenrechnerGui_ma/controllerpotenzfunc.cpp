#include "controllerpotenzfunc.h"

ControllerPotenzFunc::ControllerPotenzFunc() {}

void ControllerPotenzFunc::rechnePotenzfunktion()
{
    ergebnisPotenzfunktion = pow(zahl1, zahl2);
}

void ControllerPotenzFunc::rechneWurzel()
{
    ergebnisWurzel = sqrt(zahl1);
}

double ControllerPotenzFunc::getErgebnisWurzel()
{
    return ergebnisWurzel;
}

double ControllerPotenzFunc::getErgebnisPotenzfunktion()
{
    return ergebnisPotenzfunktion;
}
