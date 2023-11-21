/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 23:47:32 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/04 23:47:32 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ClapTrap a;
    ScavTrap b;
    a  = b;
    std::cout << b.get_Name() << '\n';
    b.attack("Target");
    b.takeDamage(2);
    b.attack("Target2");
    ScavTrap c(b);
    c.attack("The");
    return 0;
}