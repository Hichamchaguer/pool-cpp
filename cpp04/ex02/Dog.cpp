/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 07:03:12 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/14 14:22:17 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "default constrictor called" << std::endl;
    this->Type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(Dog const &dog) : Animal(dog), brain(new Brain(*(dog.brain)))
{
    *this = dog;
}

Dog& Dog::operator=(Dog const &dog)
{
    this->Type = dog.get_type();
    delete this->brain;
    this->brain = new Brain(*(dog.brain));
    return *this;
}

Dog::~Dog()
{
    std::cout << "destractor called" << this->Type <<std::endl;
    delete this->brain;
}

void Dog::makeSound() const
{
    std::cout << "sound of " << this->Type << std::endl;
}