#ifndef VERWALTUNG_H
#define VERWALTUNG_H

#include "element.h"

class Verwaltung
{
public:
    Verwaltung();

    void elementHintenAnhaengen(QString nameIn, QString telIn);
    void elementVorneAnhaengen(QString nameIn, QString telIn);
    void elementEinfuegenNachAktuellem(QString NameNach, QString nameIn, QString telIn);
    void elementEinfuegenVorAktuellem(QString NameVor, QString nameIn, QString telIn);

    bool elementLoeschen(QString nameIn);
    bool elementAendern(QString nameAlt, QString nameNeu, QString telNeu);
    void erstesElement(QString &name, QString &telNr);
    void elementVor(QString nameVorgaenger, QString &name, QString &telNr);
private:
    Entry * elementSuchen(QString nameIn) const;

    Entry * fListStart;
    Entry * rListStart;
};

#endif // VERWALTUNG_H
