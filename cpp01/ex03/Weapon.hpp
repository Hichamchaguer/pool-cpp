#ifndef Weapon_hpp
#define Weapon_hpp
#include <string>
#include <iostream>

class Weapon {

    private :
        std::string Type;

    public :
        Weapon();
        Weapon(std::string type);
        ~Weapon();
        const std::string& getType();
        void setType(std::string type);
};


#endif