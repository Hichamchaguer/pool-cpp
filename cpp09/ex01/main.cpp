/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 14:25:17 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/13 04:03:05 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <exception>
#include <iostream>


int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "invalid arguments " << std::endl;
        return 1;
    }
    try {
        
        RPN r;
    
        r.result(av[1]);
    
    } catch (std::exception& e) {
        
            std::cout << e.what() << std::endl;
    }
    
    
    return 0;
}