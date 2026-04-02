#pragma once
#include "Cladire.h"

class Spital : public Cladire {
    bool areUrgenta;
public:
    Spital(std::string n, int cap, bool urg);
    void afisare() const override;
    ElementUrban* clone() const override;
};