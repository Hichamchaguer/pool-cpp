/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 11:47:43 by hchaguer          #+#    #+#             */
/*   Updated: 2023/10/28 11:47:43 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::~HumanB() { }

HumanB::HumanB(std::string n) : Name(n), p(NULL) { };

std::string &HumanB::getHumanB() {

    return (this->Name);
}

void  HumanB::setHumanB(std::string &name)
{
    this->Name = name;
}

void HumanB::setWeapon(Weapon &w){ 

    this->p = &w;
}

void HumanB::attack()
{
    if (p != NULL)
        std::cout << this->Name << " attacks with their " << p->getType() << std::endl;
    else  
        std::cout << this->Name << " attacks with their " << std::endl;
}
