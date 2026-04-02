#include "Meniu.h"
#include "Cladire.h"
#include "Spital.h"
#include "StatieMeteo.h"
#include "Exceptii.h"
#include <iostream>
#include <string>

void Meniu::start() {
    int optiune;
    do {
        std::cout << "\n--- MENIU SMART CITY ---\n";
        std::cout << "1. Adauga Cladire normala\n";
        std::cout << "2. Adauga Spital\n";
        std::cout << "3. Adauga Statie Meteo\n";
        std::cout << "4. Afiseaza tot orasul\n";
        std::cout << "0. Iesire\nAlege: ";
        std::cin >> optiune;
        
        try {
            if (optiune == 1) {
                std::string nume;
                int capacitate;
                std::cout << "Introdu numele cladirii (un singur cuvant): ";
                std::cin >> nume;
                std::cout << "Introdu capacitatea: ";
                std::cin >> capacitate;
                
                gest.adaugaElement(new Cladire(nume, capacitate));
                std::cout << "Cladire adaugata cu succes!\n";
            }
            else if (optiune == 2) {
                std::string nume;
                int capacitate;
                bool areUrgenta;
                std::cout << "Introdu numele spitalului: ";
                std::cin >> nume;
                std::cout << "Introdu capacitatea: ";
                std::cin >> capacitate;
                std::cout << "Are sectie de urgente? (1 pentru Da, 0 pentru Nu): ";
                std::cin >> areUrgenta;
                
                gest.adaugaElement(new Spital(nume, capacitate, areUrgenta));
                std::cout << "Spital adaugat cu succes!\n";
            }
            else if (optiune == 3) {
                std::string nume;
                float temp, umiditate;
                std::cout << "Introdu zona statiei meteo: ";
                std::cin >> nume;
                std::cout << "Introdu temperatura inregistrata: ";
                std::cin >> temp;
                std::cout << "Introdu umiditatea (in procente): ";
                std::cin >> umiditate;
                
                gest.adaugaElement(new StatieMeteo(nume, temp, umiditate));
                std::cout << "Statie Meteo adaugata cu succes!\n";
            }
            else if (optiune == 4) {
                std::cout << "\n--- LISTA ELEMENTE ---\n";
                gest.afiseazaToate();
            }
        } catch (const ExceptieOras& e) {
            std::cout << "\nEXCEPTIE PRINSA: " << e.what() << "\n";
        }
    } while (optiune != 0);
}