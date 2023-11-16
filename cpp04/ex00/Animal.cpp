/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 06:36:11 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/13 08:28:25 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "default constrictor called" << std::endl;
    this->Type = "";
}

Animal::Animal(Animal const &animal)
{
    *this = animal;
}

std::string Animal::get_type() const
{
    return (this->Type);
}

// void Animal::set_type(std::string type)
// {
//     this->Type = type;
// }

Animal& Animal::operator=(Animal const &animal)
{
    this->Type = animal.get_type();
    return *this;
}

Animal::~Animal()
{
    std::cout << "destractor called" << this->Type <<std::endl;
}

void Animal::makeSound() const
{
    std::cout << "sound of Animal" << std::endl;
}