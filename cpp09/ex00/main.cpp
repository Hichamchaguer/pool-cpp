/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:13:43 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/09 15:55:47 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
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

    BitcoinExchange b;
    
    return 0;
}