/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 23:20:53 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/04 23:50:09 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "scavtrap's constrictor called " << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "scavtrap's destractor called " << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

std::ostream& operator<<(std::ostream &o, ScavTrap &scav)
{
    o << scav.get_ClapTrap();
    return o;
}