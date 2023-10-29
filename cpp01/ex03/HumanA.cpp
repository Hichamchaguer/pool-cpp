/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 11:47:31 by hchaguer          #+#    #+#             */
/*   Updated: 2023/10/28 11:47:31 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string n, Weapon &wep) : Name(n), w(wep) { };

HumanA::~HumanA() { }

std::string HumanA::getHumanA() {

    return (this->Name);
}

void HumanA::setHumanA(std::string name)
{
    this->Name = name;
}

void HumanA::attack()
{
    std::cout << this->Name << " attacks with their " << w.getType() << std::endl;
}
