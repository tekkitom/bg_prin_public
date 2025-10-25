#ifndef CONTROLLEREXPONENTIAL_H
#define CONTROLLEREXPONENTIAL_H

#include <cmath>
#include "controllerpunkt.h"

class ControllerExponential : public ControllerPunkt
{
public:
    ControllerExponential();
    void rechnePotenzfunktion();
    void rechneWurzel();

    double getErgebnisWurzel();
    double getErgebnisPotenzfunktion();

private:
    double ergebnisWurzel;
    double ergebnisPotenzfunktion;
};

#endif // CONTROLLEREXPONENTIAL_H
