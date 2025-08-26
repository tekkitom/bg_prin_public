#include <iostream>
#include "ui.h"
using namespace std;

int main()
{
    int temp = 0;
    cout << "Daschenrechner" << endl;

    Ui myUi;
    cout << "Nummern in den Objekten" << endl;
    myUi.zeigeNummern();

    cout << "Addition" << endl;
    myUi.rechneAdd();
    cout << "Substaktion" << endl;
    myUi.rechneSub();
    cout << "Multiplikation" << endl;
    myUi.rechneMul();
    cin >> temp;
    return 0;
}
