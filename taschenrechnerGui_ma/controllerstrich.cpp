#include "controllerstrich.h"

ControllerStrich::ControllerStrich() {
    zahl1 = 0.0;
    zahl2 = 0.0;
}

void ControllerStrich::rechneAdd()
{
    summe = zahl1 + zahl2;
}

void ControllerStrich::rechneSub()
{
    differenz = zahl1 - zahl2;
}


double ControllerStrich::getZahl1()
{
    return zahl1;
}

void ControllerStrich::setZahl1(double newZahl1)
{
    zahl1 = newZahl1;
}

double ControllerStrich::getZahl2()
{
    return zahl2;
}

void ControllerStrich::setZahl2(double newZahl2)
{
    zahl2 = newZahl2;
}

double ControllerStrich::getSumme()
{
    return summe;
}

double ControllerStrich::getDdifferenz()
{
    return differenz;
}
