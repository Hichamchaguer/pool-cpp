/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 08:14:19 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/17 10:27:18 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat default constrictor called" << std::endl;
    this->Type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &cat) : WrongAnimal(cat)
{
    std::cout << "WrongCat copy constrictor called" << std::endl;
    *this = cat;
}

WrongCat& WrongCat::operator=(WrongCat const &cat)
{
    std::cout << "WrongCat assingment operator called" << std::endl;
    this->Type = cat.get_type();
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destractor called" << this->Type <<std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "sound of " << this->Type << std::endl;
}