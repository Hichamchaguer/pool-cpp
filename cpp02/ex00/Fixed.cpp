/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:42:32 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/03 16:42:32 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


fixed::fixed() : value(0) { 

    std::cout << "Default constructor called" << std::endl;
}


fixed::fixed(fixed const &test1) {

    std::cout << "Copy constructor called" << std::endl;
    *this = test1;
    return ;
}


int fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

fixed& fixed::operator=(fixed const &t)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->value = t.getRawBits();
    return *this;
}

fixed::~fixed()
{
    std::cout << "destractor called " << std::endl;
}

void fixed::setRawBits(int const raw)
{
    this->value = raw;
}

