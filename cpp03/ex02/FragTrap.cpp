/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 23:55:50 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/04 23:59:05 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Fragtrap's default constrictor called " << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Fragtrap's default destrictor called " << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "hight five guys !!" << std::endl;
}

std::ostream& operator<<(std::ostream &o, FragTrap &frag)
{
    o << frag.get_ClapTrap();
    return o;
}