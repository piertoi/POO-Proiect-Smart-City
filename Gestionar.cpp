#include "Gestionar.h"
#include "Exceptii.h"

Gestionar::Gestionar(const Gestionar& altul) {
    for (auto el : altul.elemente) elemente.push_back(el->clone());
}
Gestionar& Gestionar::operator=(const Gestionar& altul) {
    if (this != &altul) {
        for (auto el : elemente) delete el;
        elemente.clear();
        for (auto el : altul.elemente) elemente.push_back(el->clone());
    }
    return *this;
}
Gestionar::~Gestionar() {
    for (auto el : elemente) delete el;
}
void Gestionar::adaugaElement(ElementUrban* el) {
    if (!el) throw ExceptieOras("Eroare: Element null!");
    elemente.push_back(el);
}
void Gestionar::afiseazaToate() const {
    if (elemente.empty()) throw ExceptieOras("Orasul e gol!");
    for (auto el : elemente) el->afisare();
}