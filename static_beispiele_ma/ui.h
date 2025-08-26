#ifndef UI_H
#define UI_H

#include <iostream>
#include "rechner.h"

class Ui
{
public:
    Ui();
    void rechneAdd();
    void rechneSub();
    void rechneMul();
    void zeigeNummern();

private:
    Rechner *myRechner1;
    Rechner *myRechner2;
    Rechner *myRechner3;
};

#endif // UI_H
