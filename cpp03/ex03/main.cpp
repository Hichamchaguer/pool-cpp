/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 02:34:32 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/16 13:44:57 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    // ClapTrap *p = new DiamondTrap("hicham");

    // ClapTrap *k = new DiamondTrap("dd");
    ClapTrap *c = new FragTrap;
    // *k = *p;
    // k->attack("hhhicham");
    c->attack("hicham");
    //ClapTrap* d = new FragTrap("test");
    //ScavTrap* f = new ScavTrap("dddd");
    delete c;
//    delete p;

    // d->attack("lllxxxx");
    // p->attack("cccccc");
    // f->attack("cccccc");
    //c.attack("Clap");
    // d.attack("abccc");
   // std::cout << d << std::endl;

    return 0;
}