/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 02:43:29 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/05 23:17:46 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    //std::cout << "Fragtrap's default constrictor called " << std::endl;
}

FragTrap::FragTrap(std::string &name)
{
    this->Name = "";
    this->Points = 100;
    this->Pts_Energy = 100;
    this->Attack = 30;
}

FragTrap::~FragTrap()
{
    //std::cout << "Fragtrap's default destrictor called " << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "hight five guys !!" << std::endl;
}

std::ostream& operator<<(std::ostream &o, FragTrap &frag)
{
    o << frag.get_ClapTrap();
    return o;
}