#ifndef CONTROLLERSTRICH_H
#define CONTROLLERSTRICH_H

class ControllerStrich
{
public:
    ControllerStrich();
    void rechneAdd();
    double rechneAdd(double zahl1, double zahl2);
    int rechneAdd(int zahl1, int zahl2);
    void rechneSub();

    double getZahl1();
    void setZahl1(double newZahl1);
    double getZahl2();
    void setZahl2(double newZahl2);
    double getSumme();
    double getDdifferenz();

protected:
    double zahl1;
    double zahl2;

private:
    double summe;
    double differenz;
};

#endif // CONTROLLERSTRICH_H
