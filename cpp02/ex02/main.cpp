/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:50:26 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/03 15:50:26 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"


int main( void ) {

    fixed a;
    //fixed b( 5.05f );
    //fixed c( 2 );
    fixed const b( fixed( 5.05f ) * fixed( 2 ) );
    std::cout << "b : "<< b << std::endl;
    std::cout << "a : "<< a << std::endl;
    std::cout << "++a : "<< ++a << std::endl;
    std::cout << "a : "<< a << std::endl;
    std::cout << "a++ : "<< a++ << std::endl;
    std::cout << "a : "<< a << std::endl;
    std::cout << "max : "<< fixed::max(a,b ) << std::endl;
    return 0;

}
