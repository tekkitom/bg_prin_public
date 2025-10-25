#include "controllerint.h"

/**
 * @brief Standardkonstruktor - leer
 */
ControllerInt::ControllerInt() : ControllerPunkt()
{

}

/**
 * @brief Konstruktor mit Parametern
 * @param zahl1 Wert für Zahl1
 * @param zahl2 Wert für Zahl2
 */
ControllerInt::ControllerInt(int zahl1, int zahl2) : ControllerPunkt(zahl1 + zahl2)
{
    this->zahl1 = zahl1;
    this->zahl2 = zahl2;
}

/**
 * @brief verdeckt rechneAdd in ControllerStrich
 * @param zahl1 Wert für Zahl1
 * @param zahl2 Wert für Zahl2
 * @return Summe
 */
int ControllerInt::rechneAdd(int zahl1, int zahl2)
{
    summe = zahl1 + zahl2;
    return summe;
}

void ControllerInt::rechneSumme()
{
    summe = zahl1 + zahl2;
}

int ControllerInt::getQuotient()
{
    return quotient;
}

int ControllerInt::getSumme()
{
    return summe;
}
