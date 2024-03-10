#include <iostream>
#include "energia.h"
#include "energiakinetyczna.h"
#include "energiapotencjalna.h"
#include "emc2.h"
using namespace std;
int main() {
    double m = 25;
    double v = 15;
    double h = 10;

    Energia* e1 = new EnergiaKinetyczna(m, v);
    Energia* e2 = new EnergiaPotencjalna(m, h);
    Energia* e3 = new Emc2(m);

    cout << "Energia kinetyczna: " << e1->calculate() << endl;
    cout << "Energia potencjalna: " << e2->calculate() << endl;
    cout << "Energia: " << e3->calculate() << endl;

    delete e1;
    delete e2;
    delete e3;
    return 0;
}