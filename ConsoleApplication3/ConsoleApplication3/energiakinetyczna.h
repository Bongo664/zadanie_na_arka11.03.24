#ifndef ENERGIAKINETYCZNA_H
#define ENERGIAKINETYCZNA_H

#include "energia.h"

class EnergiaKinetyczna : public Energia {
private:
    double m;
    double v;
public:
    EnergiaKinetyczna(double m, double v);
    double calculate() const;
};

#endif