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


Zombie::Zombie(){ 
    std::cout << "constrctor called " << std::endl;
}
Zombie::Zombie(std::string Name) : name(Name) { }

void    Zombie::announce(void) {
    
    std::cout << "Foo: BraiiiiiiinnnzzzZ..." << std::endl;
}