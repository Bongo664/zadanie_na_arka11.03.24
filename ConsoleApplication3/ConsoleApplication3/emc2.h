#ifndef EMC2_H
#define EMC2_H

#include "energia.h"

class Emc2 : public Energia {
private:
    double m;
public:
    Emc2(double m);
    double calculate() const;
};

#endif