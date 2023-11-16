/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 02:34:32 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/16 00:31:54 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    ClapTrap *p = new DiamondTrap("hicham");
    //ClapTrap c("test");
    
    //ClapTrap* d = new FragTrap("test");
    //ScavTrap* f = new ScavTrap("dddd");
        
    delete p;

    // std::cout << f->get_Name() << std::endl;
    // std::cout << p->get_Name() << std::endl;
    // std::cout << d->get_Name() << std::endl;
    // d->attack("lllxxxx");
    // p->attack("cccccc");
    // f->attack("cccccc");
    //c.attack("Clap");
    // d.attack("abccc");
   // std::cout << d << std::endl;

    return 0;
}