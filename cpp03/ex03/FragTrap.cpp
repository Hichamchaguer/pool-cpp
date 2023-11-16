/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 02:43:29 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/15 10:04:08 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap's default constractor called " << std::endl;
    this->Points = 100;
    this->Pts_Energy = 100;
    this->AttackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap's constractor called " << std::endl;
    this->Points = 100;
    this->Pts_Energy = 100;
    this->AttackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "Fragtrap's destrictor called " << this->Name <<std::endl;
}

FragTrap::FragTrap(FragTrap const &frag) : ClapTrap(frag) { }

FragTrap& FragTrap::operator=(FragTrap  &frag)
{
    this->Name = frag.get_Name();
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "hight five guys !!" << std::endl;
}
