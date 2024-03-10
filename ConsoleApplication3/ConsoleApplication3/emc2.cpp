#include "emc2.h"

Emc2::Emc2(double m) : m(m) {}

double Emc2::calculate() const {
    const double c = 299792458;
    return m * c * c;
}