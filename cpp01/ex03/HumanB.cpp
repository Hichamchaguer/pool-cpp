#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::HumanB() { }
HumanB::HumanB(std::string n, Weapon wep) : Name(n), w(wep) { }; 


HumanB::~HumanB() { }

std::string HumanB::getHumanB() {

    return (this->Name);
}

void  HumanB::setHumanB(std::string name)
{
    this->Name = name;
}

void HumanB::attack()
{
    std::cout << this->Name << " attacks with their " << std::endl;
}
