#include "StatieMeteo.h"
// Rezolvarea diamantului prin apelarea explicita a constructorului bazei
StatieMeteo::StatieMeteo(std::string n, float t, float u) : Senzor(n), SenzorTemp(n, t), SenzorUmid(n, u) {}
void StatieMeteo::afisare() const { std::cout << "Statie Meteo: " << temp << "C, " << umiditate << "%\n"; }
ElementUrban* StatieMeteo::clone() const { return new StatieMeteo(*this); }