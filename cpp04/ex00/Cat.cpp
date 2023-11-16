/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 06:33:39 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/13 08:28:35 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "default constrictor called" << std::endl;
    this->Type = "Cat";
}

Cat::Cat(Cat const &cat) : Animal(cat)
{
    *this = cat;
}

Cat& Cat::operator=(Cat const &cat)
{
    this->Type = cat.get_type();
    return *this;
}

Cat::~Cat()
{
    std::cout << "destractor called" << this->Type <<std::endl;
}

void Cat::makeSound() const
{
    std::cout << "sound of " << this->Type << std::endl;
}