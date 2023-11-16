/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 23:20:53 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/15 10:40:56 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "scavtrap's default constrictor called " << std::endl;
    this->Points = 100;
    this->Pts_Energy = 50;
    this->AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "scavtrap's constrictor called " << std::endl;
    this->Points = 100;
    this->Pts_Energy = 50;
    this->AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& Scav) : ClapTrap(Scav) { }

ScavTrap& ScavTrap::operator=(ScavTrap &Scav)
{
    this->Name = Scav.get_Name();
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
