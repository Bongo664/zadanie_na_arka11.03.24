#include "energiakinetyczna.h"

EnergiaKinetyczna::EnergiaKinetyczna(double m, double v) : m(m), v(v) {}

double EnergiaKinetyczna::calculate() const {
    return 0.5 * m * v * v;
}