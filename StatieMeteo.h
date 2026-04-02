#pragma once
#include "SenzorTemp.h"
#include "SenzorUmid.h"

class StatieMeteo : public SenzorTemp, public SenzorUmid {
public:
    StatieMeteo(std::string n, float t, float u);
    void afisare() const override;
    ElementUrban* clone() const override;
};