#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon() {}
Weapon::Weapon(std::string type) : Type(type) {}

Weapon::~Weapon() {}

const std::string& Weapon::getType() {

    return (this->Type);
}

void  Weapon::setType(std::string type) {

    this->Type = type;
}