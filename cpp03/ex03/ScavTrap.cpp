/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 02:43:34 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/16 17:26:01 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "scavtrap's default constrictor called " << std::endl;
    this->Hit_Points = 100;
    this->Pts_Energy = 50;
    this->AttackDamage = 200;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "scavtrap's constrictor called " << std::endl;
    this->Hit_Points = 100;
    this->Pts_Energy = 50;
    this->AttackDamage = 200;
}

ScavTrap::ScavTrap(const ScavTrap& Scav) : ClapTrap(Scav) 
{ 
    std::cout << "ScavTrap copy constructor called " << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &Scav)
{
    std::cout << "ScavTrap assignemet constructor called " << std::endl;
    this->Name = Scav.Name;
    this->Hit_Points = Scav.Hit_Points;
    this->Pts_Energy = Scav.Pts_Energy;
    this->AttackDamage = Scav.AttackDamage;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "scavtrap's destractor called " << this->Name <<std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->Hit_Points > 0 || this->Pts_Energy > 0)
    {
        std::cout << "ScavTrap " << this->Name << " attacks " << target <<", causing " << this->AttackDamage << " points of damage!" << " current Hit Point "<< this->Hit_Points<< std::endl;
        this->Pts_Energy--;
        std::cout << this->Pts_Energy << std::endl;
    }
    else if (this->Hit_Points <= 0 || this->Pts_Energy <= 0)
        std::cout << "ScavTrap " << this->Name << " dead" << std::endl;
    return ;
}
