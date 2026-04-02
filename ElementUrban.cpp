#include "ElementUrban.h"
int ElementUrban::contorID = 0;

ElementUrban::ElementUrban(std::string n) : nume(n) { id = ++contorID; }
int ElementUrban::getNrElemente() { return contorID; }