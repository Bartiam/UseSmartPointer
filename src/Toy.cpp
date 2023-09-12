#include "Toy.h"

Toy::Toy(const std::string& name) : name(name) {}

const std::string& Toy::getName() { return name; }
