/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 02:36:49 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/16 17:25:05 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap constrictor called " << std::endl;
    this->Hit_Points = 100;
    this->Pts_Energy = 50;
    this->AttackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_Clap_name"), FragTrap(name), ScavTrap(name)
{
    std::cout << "DiamondTrap constrictor para called " << std::endl;
    this->Hit_Points = 100;
    this->Pts_Energy = 50;
    this->AttackDamage = 30;

   // std::cout << "Points : " << this->Points << std::endl;
}

DiamondTrap::~DiamondTrap()
{
   std::cout << "diamondTrap destrictor called " << this->Name <<std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap &d)
{
    std::cout << "DiamondTrap assignemet constructor called " << std::endl;
    this->Name = d.Name;
    this->Hit_Points = d.Hit_Points;
    this->Pts_Energy = d.Pts_Energy;
    this->AttackDamage = d.AttackDamage;
    return *this;
}

DiamondTrap::DiamondTrap(DiamondTrap &d) : ClapTrap(d), FragTrap(d), ScavTrap(d)
{
    std::cout << "DiamondTrap copy constractor called " << std::endl;
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
