#ifndef HUMANA_HPP
#define  HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"


class HumanA {
    private :
        std::string Name;
        Weapon &w;
    public :
        HumanA(std::string n, Weapon &w);
        std::string getHumanA();
        void setHumanA(std::string name);
        ~HumanA();
        void attack();

};


#endif