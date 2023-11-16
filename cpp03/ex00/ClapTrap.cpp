/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:55:08 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/16 00:53:05 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Points(10), Pts_Energy(10), AttackDamage(0)
{ 
    std::cout << "ClapTrap default constractor called " << std::endl;
}

ClapTrap::ClapTrap(std::string name) : Name(name), Points(10), Pts_Energy(10), AttackDamage(0) 
{ 
    std::cout << "ClapTrap constructor called " << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &clap)
{
    *this = clap;
    return ;
}

std::string const &ClapTrap::get_Name() const
{
    return (this->Name);
}

ClapTrap& ClapTrap::operator=(ClapTrap const &clapTrap) 
{
    this->Name = clapTrap.Name;
    this->Point = ClapTrap.points;
    this->Pts_Energy = ClapTrap.Pts_Energy;
    this->AttackDamage = ClapTrap.AttackDamage;
    
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "claptrap's destractor called " << this->Name << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->Points > 0 || this->Pts_Energy > 0)
    {
        std::cout << "ClapTrap " << this->Name<< " attacks " << target <<", causing " << this->AttackDamage << " points of damage!" << " current Hit Point "<< this->Points<< std::endl;
        this->Pts_Energy--;
        std::cout << this->Pts_Energy << std::endl;
    }
    else if (this->Points <= 0 || this->Pts_Energy <= 0)
        std::cout << "ClapTrap " << this->Name << " dead" << std::endl;
    return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->Points <= 0 && this->Pts_Energy <= 0)
        std::cout << "ClapTrap " << this->Name << " has already dead !" << std::endl;
    else if (this->Points && this->Pts_Energy)
    {
        this->Points -= amount;
        if (this->Points < 0)
            this->Points = 0;
        std::cout << "ClapTrap " << this->Name << " has lost " << amount <<" current Hit Point "<< this->Points << std::endl;
    }
    return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->Pts_Energy > 0 || this->Points > 0)
    {
        this->Points += amount;
        std::cout << "ClapTrap " << this->Name << " repaire " << amount << " current Hit Point "<< this->Points << std::endl;
        this->Pts_Energy--;
    }
    else
        std::cout << "ClapTrap " << this->Name << " has already dead !" << std::endl;
    return ;
}
