/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 02:43:29 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/16 17:25:31 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap's default constractor called " << std::endl;
    this->Hit_Points = 100;
    this->Pts_Energy = 100;
    this->AttackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap's constractor called " << std::endl;
    this->Hit_Points = 100;
    this->Pts_Energy = 100;
    this->AttackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "Fragtrap's destrictor called " << this->Name <<std::endl;
}

FragTrap::FragTrap(FragTrap const &frag) : ClapTrap(frag) 
{ 
    std::cout << "FragTrap copy constructor called " << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap  &frag)
{
    std::cout << "FragTrap assignemet constructor called " << std::endl;
    this->Name = frag.Name;
    this->Hit_Points = frag.Hit_Points;
    this->Pts_Energy = frag.Pts_Energy;
    this->AttackDamage = frag.AttackDamage;
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "hight five guys !!" << std::endl;
}
