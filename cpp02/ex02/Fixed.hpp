#ifndef Fixed_hpp
#define Fixed_hpp

#include <iostream>
#include <cmath>

class fixed {

    private :

        int value;
        static int const  fractionalBits = 8;

    public :

        fixed();
        ~fixed();
        fixed(int const rawBits);
        fixed(float const rawBits);
        fixed(fixed const &test1);
        int getRawBits() const;
        void setRawBits(int const raw);
        fixed& operator=(fixed const &t);
        bool operator>(fixed const &t);
        bool operator<(fixed const &t);
        bool operator>=(fixed const &t);
        bool operator<=(fixed const &t);
        bool operator==(fixed const &t);
        bool operator!=(fixed const &t);
        fixed operator+(fixed const &t);
        fixed operator-(fixed const &t);
        fixed operator*(fixed const &t);
        fixed operator/(fixed const &t);
        fixed& operator++();
        fixed operator++(int);
        float toFloat( void ) const;
        int toInt( void ) const;

};

std::ostream& operator<<(std::ostream &o, fixed const &fixed);

#endif