#ifndef CONTROLLERPOTENZFUNC_H
#define CONTROLLERPOTENZFUNC_H

#include <cmath>
#include "controllerpunkt.h"

class ControllerPotenzFunc : public ControllerPunkt
{
public:
    ControllerPotenzFunc();
    void rechnePotenzfunktion();
    void rechneWurzel();

    double getErgebnisWurzel();
    double getErgebnisPotenzfunktion();

private:
    double ergebnisWurzel;
    double ergebnisPotenzfunktion;
};

#endif // CONTROLLERPOTENZFUNC_H
