#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::HumanB(std::string n) : Name(n), p(NULL) { }; 

HumanB::~HumanB() { }

std::string HumanB::getHumanB() {

    return (this->Name);
}

void  HumanB::setHumanB(std::string name)
{
    this->Name = name;
}

void HumanB::setWeapon(Weapon &w){ 

    this->p = &w;
}

void HumanB::attack()
{
    if (p)
        std::cout << this->Name << " attacks with their " << p->getType() << std::endl;
    else  
        std::cout << this->Name << " attacks with their " << std::endl;
}
