#include "Toy.h"

Toy::Toy(const std::string& name) : name(name) {}

void Toy::setToyName(const std::string& name) { this->name = name; }

const std::string& Toy::getName() { return name; }
