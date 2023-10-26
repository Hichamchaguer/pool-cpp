#include "Zombie.hpp"

Zombie::Zombie() {}

void Zombie::set_name(std::string Name) {
    
    this->name = Name;
}

Zombie::~Zombie() {

    std::cout << "destructor called " << std::endl;
}

void    Zombie::announce(void) {
    
    std::cout << this->name <<" BraiiiiiiinnnzzzZ..." << std::endl;
}