/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 07:03:12 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/20 15:07:01 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "dog default constrictor called" <<std::endl;
    this->Type = "Dog";
}

Dog::Dog(Dog const &dog) : Animal(dog)
{
    std::cout << "dog constrictor copy called" << std::endl;
    *this = dog;
}

Dog& Dog::operator=(Dog const &dog)
{
    std::cout << "dog assignement operator called" << std::endl;
    this->Type = dog.get_type();
    return *this;
}

Dog::~Dog()
{
    std::cout << "dog destractor called " << this->Type <<std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Hooow " << std::endl;
}