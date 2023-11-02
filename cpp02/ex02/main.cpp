#include "Fixed.hpp"


int main( void ) {

    fixed a;
    fixed const b( fixed( 5.05f ) * fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    //std::cout << Fixed::max( a, b ) << std::endl;
    return 0;

}
