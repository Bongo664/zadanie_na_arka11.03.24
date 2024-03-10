#ifndef ENERGIAPOTENCJALNA_H
#define ENERGIAPOTENCJALNA_H

#include "energia.h"

class EnergiaPotencjalna : public Energia {
private:
    double m;
    double h;
public:
    EnergiaPotencjalna(double m, double h);
    double calculate() const;
};

#endif