#include <iostream>
#include "Zombie.hpp"

int main()
{
    int n = 3;
    Zombie *z = zombieHorde(n, "hicham");

    for (size_t i = 0; i < n; i++)
    {
        z[i].announce();
    }
    
    delete[] z;
    return 0;
}