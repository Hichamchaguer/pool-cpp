/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 02:36:49 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/05 03:39:08 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.cpp"


DiamondTrap::DiamondTrap()
{
    std::cout << "constrictor called " << std::endl;
}

DiamondTrap::DiamondTrap(std::string &name) : Name(name)
{
    ClapTrap::Name = name + "_clap_name";
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "districtor called " << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << this->Name << std::endl;
}