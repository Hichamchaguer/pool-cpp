#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string n, Weapon &wep) : Name(n), w(wep) { };

HumanA::~HumanA() { }

std::string HumanA::getHumanA() {

    return (this->Name);
}

void HumanA::setHumanA(std::string name)
{
    this->Name = name;
}

void HumanA::attack()
{
    std::cout << this->Name << " attacks with their " << w.getType() << std::endl;
}
