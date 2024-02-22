/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:28:10 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/25 13:01:42 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "whatever.hpp"


/*int main()
{
    int a = 1;
    int b = 2;
    std::cout << "before ... " << std::endl;
    std::cout << "  a : " << a << std::endl << "  b : " << b << std::endl;
    swap(a, b);
    std::cout << "after ... " << std::endl;
    std::cout << "  a : " << a << std::endl << "  b : " << b << std::endl;

    std::cout << "--------------------------------------- " << std::endl;

    int c = 10;
    int d = 20;
    
    int minn = min(c, d);
    int maxx = max(c, d);
    std::cout << "min : " << minn << std::endl;
    std::cout << "max : " << maxx << std::endl;

    std::cout << "--------------------------------------- " << std::endl;
    

    
    return 0;
}*/


int main( void ) {
    
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}
