#ifndef HUMANB_HPP
#define  HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"


class HumanB {
    private :
        std::string Name;
        Weapon *p;
    public :
        HumanB(std::string n);
        ~HumanB();
        void setWeapon(Weapon &w);
        std::string getHumanB();
        void  setHumanB(std::string name);
       void attack();

};


#endif