/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 23:53:18 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/04 23:55:36 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{ 
    std::cout << "default constractor called " << std::endl;
}

ClapTrap::ClapTrap(std::string const& name) : Name(name), Points(100), Pts_Energy(100), Attack(30) 
{ 
    std::cout << "constructor called " << std::endl;
}

std::string ClapTrap::get_ClapTrap()
{
    return (this->Name);
}

void ClapTrap::set_name(std::string name)
{
    this->Name =  name;
}

ClapTrap& ClapTrap::operator=(ClapTrap &clapTrap) 
{ 
    this->Name = clapTrap.get_ClapTrap();
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "destractor called " << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " <<this->Name<< " attacks " <<target <<" , causing " << "points of damage!" << std::endl;       
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " <<this->Name<< " has " << amount << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " <<this->Name<< " repaire " << amount << std::endl;
}

std::ostream& operator<<(std::ostream &o, ClapTrap &clap)
{
    o << clap.get_ClapTrap();
    return o;
}