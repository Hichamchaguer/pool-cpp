/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 07:03:12 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/13 08:28:40 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "default constrictor called" << std::endl;
    this->Type = "Dog";
}

Dog::Dog(Dog const &dog) : Animal(dog)
{
    *this = dog;
}

Dog& Dog::operator=(Dog const &dog)
{
    this->Type = dog.get_type();
    return *this;
}

Dog::~Dog()
{
    std::cout << "destractor called" << this->Type <<std::endl;
}

void Dog::makeSound() const
{
    std::cout << "sound of " << this->Type << std::endl;
}