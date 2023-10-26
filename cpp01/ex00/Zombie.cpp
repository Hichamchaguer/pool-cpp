/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:44:29 by hchaguer          #+#    #+#             */
/*   Updated: 2023/10/22 17:07:55 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

void Zombie::set_name(std::string Name) {

    this->name = Name;
}

Zombie::~Zombie() {

    std::cout << "destructor called " << std::endl;
}

void    Zombie::announce(void) {
    
    std::cout << this->name <<" BraiiiiiiinnnzzzZ..." << std::endl;
}