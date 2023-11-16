/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 06:33:39 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/14 14:20:15 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() 
{
    std::cout << "default constrictor called" << std::endl;
    this->Type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(Cat const &cat) : Animal(cat), brain(new Brain(*(cat.brain)))
{
    *this = cat;
}

Cat& Cat::operator=(Cat const &cat)
{
    this->Type = cat.get_type();
    delete this->brain;
    this->brain = new Brain(*(cat.brain));
    return *this;
}

Cat::~Cat()
{
    std::cout << "destractor called" << this->Type <<std::endl;
    delete this->brain;
}

void Cat::makeSound() const
{
    std::cout << "sound of " << this->Type << std::endl;
}