#pragma once
#include "ElementUrban.h"

class Cladire : public ElementUrban {
protected:
    int capacitate;
public:
    Cladire(std::string n, int cap);
    void afisare() const override;
    ElementUrban* clone() const override;
};