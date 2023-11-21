/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 06:36:11 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/20 15:20:38 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : Type("Animal")
{
    std::cout << "Animal default constrictor called " << std::endl;
}

Animal::Animal(Animal const &animal)
{
    std::cout << "Animal copy constrictor called" << std::endl;
    *this = animal;
}

std::string Animal::get_type() const
{
    return (this->Type);
}

Animal& Animal::operator=(Animal const &animal)
{
    std::cout << "Animal assignement operator called" << std::endl;
    this->Type = animal.get_type();
    return *this;
}

Animal::~Animal()
{
    std::cout << "animal destractor called " << this->Type <<std::endl;
}

void Animal::makeSound() const
{
    std::cout << "sound of Animal" << std::endl;
}