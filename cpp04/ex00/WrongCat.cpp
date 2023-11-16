/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 08:14:19 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/13 08:28:51 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "default constrictor called" << std::endl;
    this->Type = "Cat";
}

WrongCat::WrongCat(WrongCat const &cat) : WrongAnimal(cat)
{
    *this = cat;
}

WrongCat& WrongCat::operator=(WrongCat const &cat)
{
    this->Type = cat.get_type();
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "destractor called" << this->Type <<std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "sound of " << this->Type << std::endl;
}