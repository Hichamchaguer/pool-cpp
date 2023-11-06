/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 02:36:49 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/05 23:17:20 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    //std::cout << "constrictor called " << std::endl;
}

DiamondTrap::DiamondTrap(std::string const name) : Name(name)
{
    ClapTrap::Name = name + "_Clap_name";
    this->Points = FragTrap::Points;
    this->Pts_Energy = ScavTrap::Pts_Energy;
    this->Attack = FragTrap::Attack;

    std::cout << "Points : " << this->Points << std::endl;
}

DiamondTrap::~DiamondTrap()
{
   // std::cout << "destrictor called " << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &d)
{
    //std::cout << "copy constractor called " << std::endl;
    *this = d;
}

void DiamondTrap::whoAmI()
{
    std::cout << "diamond " << this->Name << " is " << ClapTrap::Name << std::endl;
}

std::ostream& operator<<(std::ostream &o, DiamondTrap &diamond)
{
    o << diamond.get_ClapTrap();
    return o;
}