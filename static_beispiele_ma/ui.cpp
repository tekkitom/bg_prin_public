#include "ui.h"

Ui::Ui() {
    myRechner1 = new Rechner;
    myRechner2 = new Rechner;
    myRechner3 = new Rechner;
}

/**
 * @brief Zugriff auf Add (mit Objekt)
 *
 * Die Methode greift auf das Objekt von myRechner1 zu und führt die Addition aus.
 */
void Ui::rechneAdd()
{
    int zahlTemp = 0;
    std::cout << "Bitte Zahl 1 eingeben ";
    std::cin >> zahlTemp;
    myRechner1->setZahl1(zahlTemp);

    std::cout << "Bitte Zahl 2 eingeben ";
    std::cin >> zahlTemp;
    myRechner1->setZahl2(zahlTemp);

    myRechner1->add();

    std::cout << "Deine Summe: " << myRechner1->getErgebnis() << std::endl;
}

/**
 * @brief Zugriff auf Sub (mit Objekt)
 *
 * Die Methode greift auf das Objekt von myRechner1 zu und führt die Subtraktion aus.
 * Da sub statisch ist, kann die Methode nichtz auf die Attribute zugreifen. Daher der Umweg über getZahl1, getZahl2.
 */
void Ui::rechneSub()
{
    int zahlTemp = 0;
    int ergebnis = 0;
    std::cout << "Bitte Zahl 1 eingeben ";
    std::cin >> zahlTemp;
    myRechner1->setZahl1(zahlTemp);

    std::cout << "Bitte Zahl 2 eingeben ";
    std::cin >> zahlTemp;
    myRechner1->setZahl2(zahlTemp);

    ergebnis = myRechner1->sub(myRechner1->getZahl1(), myRechner1->getZahl2());

    std::cout << "Deine Differenz: " << ergebnis << std::endl;
}

/**
 * @brief Zugriff auf die statische Methode mul.
 *
 * Die Methode mul ist statisch (kein Objekt!) Daher benötigt sie die Parameter zahlTemp1 und zahlTemp2.
 *
 * Im Weiteren werden statische Attribute der Klasse addiert.
 * Da die Attribute auch statisch sind gehören sie zu keinem Objekt. Der Zugriff ist hier also möglich.
 */
void Ui::rechneMul()
{
    int zahlTemp1 = 0;
    int zahlTemp2 = 0;
    int ergebnis = 0;

    std::cout << "Bitte Zahl 1 eingeben ";
    std::cin >> zahlTemp1;

    std::cout << "Bitte Zahl 2 eingeben ";
    std::cin >> zahlTemp2;

    ergebnis = Rechner::mul(zahlTemp1, zahlTemp2);
    std::cout << "Dein Produkt: " << ergebnis << std::endl;

    ergebnis = Rechner::addNextNrStatic(ergebnis);
    std::cout << "Dein Produkt++: " << ergebnis << std::endl;

    ergebnis = myRechner1->addNextNr();
    std::cout << "myRechner 1: Dein Produkt: " << ergebnis << std::endl;

    ergebnis = myRechner2->addNextNr();
    std::cout << "myRechner 2: Dein Produkt: " << ergebnis << std::endl;

    ergebnis = myRechner3->addNextNr();
    std::cout << "myRechner 3: Dein Produkt: " << ergebnis << std::endl;
}

/**
 * @brief Abruf der Attribute nr (fortlaufende Zahl)
 */
void Ui::zeigeNummern(){
    std::cout << "Rechner1: meine Nummer " << myRechner1->getNr() << std::endl;
    std::cout << "Rechner2: meine Nummer " << myRechner2->getNr() << std::endl;
    std::cout << "Rechner3: meine Nummer " << myRechner3->getNr() << std::endl << std::endl;
}
