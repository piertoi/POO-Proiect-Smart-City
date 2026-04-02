#pragma once
#include "Senzor.h"

class SenzorTemp : virtual public Senzor { // Mostenire virtuala (Diamant)
protected:
    float temp;
public:
    SenzorTemp(std::string n, float t);
    void afisare() const override;
    ElementUrban* clone() const override;
};