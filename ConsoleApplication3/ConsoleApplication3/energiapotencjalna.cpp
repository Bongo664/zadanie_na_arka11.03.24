#include "energiapotencjalna.h"

EnergiaPotencjalna::EnergiaPotencjalna(double m, double h) : m(m), h(h) {}

double EnergiaPotencjalna::calculate() const {
    return m * h * 9.8;
}