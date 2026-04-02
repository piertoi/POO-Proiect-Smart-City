#pragma once
#include <vector>
#include "ElementUrban.h"

class Gestionar {
    std::vector<ElementUrban*> elemente;
public:
    Gestionar() = default;
    Gestionar(const Gestionar& altul); // Copy constructor
    Gestionar& operator=(const Gestionar& altul); // Operator=
    ~Gestionar(); // Destructor

    void adaugaElement(ElementUrban* el);
    void afiseazaToate() const;
};