#pragma once
#include "ElementUrban.h"

class Senzor : public ElementUrban {
public:
    Senzor(std::string n);
    void afisare() const override;
    ElementUrban* clone() const override;
};