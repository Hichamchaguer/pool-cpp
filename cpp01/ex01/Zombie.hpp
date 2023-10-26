#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

    private:
        std::string name;

    public : 
        Zombie();
        ~Zombie();
        void set_name(std::string Name);
        Zombie(std::string Name);
        void announce();
};

Zombie* zombieHorde( int N, std::string name );

#endif