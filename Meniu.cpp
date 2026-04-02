#include "Meniu.h"
#include "Cladire.h"
#include "Spital.h"
#include "StatieMeteo.h"
#include "Exceptii.h"
#include <iostream>

void Meniu::start() {
    int optiune;
    do {
        std::cout << "\n1. Adauga Spital\n2. Adauga Statie Meteo\n3. Afiseaza Oras\n0. Iesire\nAlege: ";
        std::cin >> optiune;
        try {
            if (optiune == 1) gest.adaugaElement(new Spital("Floreasca", 500, true));
            else if (optiune == 2) gest.adaugaElement(new StatieMeteo("Baneasa", 25.5, 60.0));
            else if (optiune == 3) gest.afiseazaToate();
        } catch (const ExceptieOras& e) {
            std::cout << "EXCEPTIE PRINSA: " << e.what() << "\n";
        }
    } while (optiune != 0);
}