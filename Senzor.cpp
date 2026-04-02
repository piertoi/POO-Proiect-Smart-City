#include "Senzor.h"
Senzor::Senzor(std::string n) : ElementUrban(n) {}
void Senzor::afisare() const { std::cout << "Senzor Baza: " << nume << "\n"; }
ElementUrban* Senzor::clone() const { return new Senzor(*this); }