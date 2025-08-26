#ifndef RECHNER_H
#define RECHNER_H

class Rechner
{
public:
    Rechner();
    void add();
    static int mul(int zahl1, int zahl2);
    static int sub(int zahl1, int zahl2);

    int getZahl1() const;
    void setZahl1(int newZahl1);

    int getZahl2() const;
    void setZahl2(int newZahl2);

    int getErgebnis() const;

    static unsigned short addNextNrStatic(unsigned short tempVar = 0);
    unsigned short addNextNr();
    unsigned short getNr() const;

private:
    int zahl1;
    static unsigned short nextNr;
    int zahl2;
    int ergebnis;
    unsigned short nr;
};

#endif // RECHNER_H
