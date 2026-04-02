#include "SenzorTemp.h"
SenzorTemp::SenzorTemp(std::string n, float t) :  Senzor(n), temp(t) {}
void SenzorTemp::afisare() const { std::cout << "Senzor Temp: " << temp << "C\n"; }
ElementUrban* SenzorTemp::clone() const { return new SenzorTemp(*this); }