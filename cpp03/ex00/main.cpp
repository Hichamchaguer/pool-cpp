/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:43:33 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/16 00:45:31 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("hicham");


    //std::cout << clap.get_Name() << std::endl;

    clap.attack("ahmed");
    clap.takeDamage(200);
    clap.beRepaired(200);
    
    return 0;
}