#ifndef HUMANB_HPP
#define  HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"


class HumanB {
    private :
        std::string Name;
        Weapon w;
    public :
        HumanB();
        HumanB(std::string n, Weapon wep);
        ~HumanB();
        std::string getHumanB();
        void  setHumanB(std::string name);
       void attack();

};


#endif