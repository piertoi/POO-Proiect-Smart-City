#pragma once
#include "Senzor.h"

class SenzorUmid : virtual public Senzor { // Mostenire virtuala (Diamant)
protected:
    float umiditate;
public:
    SenzorUmid(std::string n, float u);
    void afisare() const override;
    ElementUrban* clone() const override;
};