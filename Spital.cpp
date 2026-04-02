#include "Spital.h"
Spital::Spital(std::string n, int cap, bool urg) : Cladire(n, cap), areUrgenta(urg) {}
void Spital::afisare() const { std::cout << "Spital: " << nume << ", Urgente: " << areUrgenta << "\n"; }
ElementUrban* Spital::clone() const { return new Spital(*this); }