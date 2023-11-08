/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 11:48:04 by hchaguer          #+#    #+#             */
/*   Updated: 2023/10/28 11:48:04 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon() {}

Weapon::Weapon(std::string type) : Type(type) {}

Weapon::~Weapon() {}

const std::string& Weapon::getType() {

    return (this->Type);
}

void  Weapon::setType(std::string type) {

    this->Type = type;
}