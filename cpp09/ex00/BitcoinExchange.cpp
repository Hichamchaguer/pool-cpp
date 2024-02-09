/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:04:02 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/09 16:20:29 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <string>

BitcoinExchange::BitcoinExchange() 
{
    std::string line;
    std::ifstream input("data.csv");

    while (std::getline(input, line))
    {
        std::istringstream iss(line);
        std::string date;
        float value;

        if (std::getline(iss, date, ',') && iss >> value)
        {
            this->Map[date] = value;
        }
    }

    for (std::map<std::string, float>::iterator it = this->Map.begin(); 
            it != this->Map.end(); ++it)
    {
        std::cout << it->first << " | " << it->second << std::endl;
    }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& b) { *this = b; }
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& b)
{
    this->Map = b.Map;
    return (*this);
}
BitcoinExchange::~BitcoinExchange() {}

