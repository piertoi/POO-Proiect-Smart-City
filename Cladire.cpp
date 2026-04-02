#include "Cladire.h"
Cladire::Cladire(std::string n, int cap) : ElementUrban(n), capacitate(cap) {}
void Cladire::afisare() const { std::cout << "Cladire: " << nume << ", Cap: " << capacitate << "\n"; }
ElementUrban* Cladire::clone() const { return new Cladire(*this); }