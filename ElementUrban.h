#pragma once
#include <iostream>
#include <string>

class ElementUrban {
protected:
    std::string nume;
    int id;
    static int contorID;
public:
    ElementUrban(std::string n);
    virtual ~ElementUrban() {}
    virtual void afisare() const = 0; // Polimorfism
    virtual ElementUrban* clone() const = 0; // Pentru Regula celor 3
    static int getNrElemente(); // Metoda statica
};