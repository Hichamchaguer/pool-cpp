#include "Fixed.hpp"

fixed::fixed() : value(0) { 

    // std::cout << "Default constructor called" << std::endl;
}


fixed::fixed(int const rawBits)
{
    this->value = rawBits << this->fractionalBits;
}

fixed::fixed(float const rawBits)
{
    this->value = rawBits * (1 << this->fractionalBits);
}

fixed::fixed(fixed const &test1) {

    // std::cout << "Copy constructor called" << std::endl;
    *this = test1;
    return ;
}

int fixed::getRawBits() const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

fixed& fixed::operator=(fixed const &t)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    this->value = t.getRawBits();
    return *this;
}

bool fixed::operator>(fixed const &t)
{
    return (this->value > t.getRawBits());
}

bool fixed::operator<(fixed const &t)
{
    return (this->value < t.getRawBits());
}

bool fixed::operator>=(fixed const &t)
{
    return (this->value >= t.getRawBits());
}

bool fixed::operator<=(fixed const &t)
{
    return (this->value <= t.getRawBits());
}

bool fixed::operator==(fixed const &t)
{
    return (this->value == t.getRawBits());
}

bool fixed::operator!=(fixed const &t)
{
    return (this->value != t.getRawBits());
}

fixed fixed::operator+(fixed const &t)
{
    return fixed(this->value + t.getRawBits());
}

fixed fixed::operator-(fixed const &t)
{
    return fixed(this->value - t.getRawBits());
}

fixed fixed::operator*(fixed const &t)
{
    return fixed(this->value * t.getRawBits());
}

fixed fixed::operator/(fixed const &t)
{
    return fixed(this->value / t.getRawBits());
}

fixed& fixed::operator++()
{
    ++this->value;
    return *this;
}

fixed fixed::operator++(int)
{
    fixed f(this->value);
    value++;
    return f;
}

fixed::~fixed()
{
    // std::cout << "destractor called " << std::endl;
}

void fixed::setRawBits(int const raw)
{
    this->value = raw;
}

float fixed::toFloat( void ) const
{
    return (this->value / (1 << this->fractionalBits));
}

int fixed::toInt( void ) const
{
    return (this->value >> this->fractionalBits);
}

std::ostream& operator<<(std::ostream &o, fixed const &fixed)
{
    o << fixed.toFloat();
    return (o);
}

