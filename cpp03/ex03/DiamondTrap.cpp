/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 02:36:49 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/16 00:49:16 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "constrictor called " << std::endl;
    this->Points = 100;
    this->Pts_Energy = 50;
    this->AttackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_Clap_name"), ScavTrap(name), FragTrap(name)
{
    this->Points = 100;
    this->Pts_Energy = 50;
    this->AttackDamage = 30;

   // std::cout << "Points : " << this->Points << std::endl;
}

DiamondTrap::~DiamondTrap()
{
   std::cout << "destrictor called " << this->Name <<std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap &d)
{
    this->Name = d.get_Name();
    return *this;
}

DiamondTrap::DiamondTrap(DiamondTrap &d) : ClapTrap(d), ScavTrap(d), FragTrap(d)
{
    //std::cout << "copy constractor called " << std::endl;
    *this = d;
}

void DiamondTrap::whoAmI()
{
    std::cout << "diamond " << this->Name << " is " << ClapTrap::Name << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);   
}
