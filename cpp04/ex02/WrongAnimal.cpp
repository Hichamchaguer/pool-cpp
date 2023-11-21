/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 08:15:50 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/17 10:38:55 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constrictor called" << std::endl;
    this->Type = "Animal";
}

WrongAnimal::WrongAnimal(WrongAnimal const &animal)
{
    std::cout << "WrongAnimal copy constrictor called" << std::endl;
    *this = animal;
}

std::string WrongAnimal::get_type() const
{
    return (this->Type);
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &animal)
{
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    this->Type = animal.get_type();
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destractor called" <<std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "sound of Animal" << std::endl;
}