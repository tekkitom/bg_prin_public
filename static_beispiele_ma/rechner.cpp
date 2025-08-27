#include "rechner.h"

/**
 * @brief Init für nextNr (staisches Attribut, daher die Wiederholung des Datentyps und Nennung der Klasse nötig.
 */
unsigned short Rechner::nextNr = 1;

/**
 * @brief Konstruktor
 */
Rechner::Rechner() {
    nr = nextNr++;

    zahl1 = 0;
    zahl2 = 0;
    ergebnis = 0;
}

/**
 * @brief Addition (nicht statisch)
 */
void Rechner::add()
{
    ergebnis = zahl1 + zahl2;
}

/**
 * @brief nextNr zu tempVar hinzu (statische Methode)
 * @param tempVar Parameter für Addition
 * @return Summe
 *
 * nextNr ist ein statisches Attribut
 */
unsigned short Rechner::addNextNrStatic(unsigned short tempVar)
{
    tempVar += nextNr;
    return tempVar;
}

/**
 * @brief nextNr zu tempVar hinzu
 * @return Summe
 *
 * nextNr ist ein statisches Attribut, ergebnis ein normales Attribut.
 */
unsigned short Rechner::addNextNr()
{
    ergebnis += nextNr;
    return ergebnis;
}

unsigned short Rechner::getNr() const
{
    return nr;
}

/**
 * @brief statische Methode Multiplikation
 * @param zahl1 Multiplikator 1
 * @param zahl2 Multiplikator 2
 * @return Produkt
 *
 * kein Zugriff auf Attribute des Objekts (es gibt kein Objekt!)
 */
int Rechner::mul(int zahl1, int zahl2)
{
    int ergebnis = 0;
    ergebnis = zahl1 * zahl2;
    return ergebnis;
}

/**
 * @brief statische Methode Subtraktion
 * @param zahl1 Minuend
 * @param zahl2 Subtrahend
 * @return Differenz
 *
 * kein Zugriff auf Attribute des Objekts (es gibt kein Objekt!)
 */
int Rechner::sub(int zahl1, int zahl2)
{
    int ergebnis = 0;
    ergebnis = zahl1 - zahl2;
    return ergebnis;
}

int Rechner::getZahl1() const
{
    return zahl1;
}

void Rechner::setZahl1(int newZahl1)
{
    zahl1 = newZahl1;
}

int Rechner::getZahl2() const
{
    return zahl2;
}

void Rechner::setZahl2(int newZahl2)
{
    zahl2 = newZahl2;
}

int Rechner::getErgebnis() const
{
    return ergebnis;
}

