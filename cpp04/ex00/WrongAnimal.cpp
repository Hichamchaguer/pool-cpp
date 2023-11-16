/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 08:15:50 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/13 08:28:47 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "default constrictor called" << std::endl;
    this->Type = "";
}

WrongAnimal::WrongAnimal(WrongAnimal const &animal)
{
    *this = animal;
}

std::string WrongAnimal::get_type() const
{
    return (this->Type);
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &animal)
{
    this->Type = animal.get_type();
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "destractor called" << this->Type <<std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "sound of Animal" << std::endl;
}