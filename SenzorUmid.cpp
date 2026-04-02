#include "SenzorUmid.h"
SenzorUmid::SenzorUmid(std::string n, float u) : Senzor(n), umiditate(u) {}
void SenzorUmid::afisare() const { std::cout << "Senzor Umiditate: " << umiditate << "%\n"; }
ElementUrban* SenzorUmid::clone() const { return new SenzorUmid(*this); }