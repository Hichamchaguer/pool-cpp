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
   // ClapTrap c("ddcc");
    ScavTrap s("ddd");
    //ClapTrap *p = new ScavTrap("hicham");

   // std::cout << c.get_Name() << std::endl;
    std::cout << s.get_Name() << std::endl;
    //std::cout << p->get_Name() << std::endl;
    return 0;
}