/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:13:43 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/15 22:36:22 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <exception>
#include <fstream>
#include <iostream>
#include <string>


int main(int ac, char** av)
{
    (void)av;
    if (ac != 2)
    {
        std::cerr << "Error: could not open file." << std::endl;        
        return 1;
    }

    try {
        
        BitcoinExchange b;
        b.exchange(av);
        
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    
    
    return 0;
}