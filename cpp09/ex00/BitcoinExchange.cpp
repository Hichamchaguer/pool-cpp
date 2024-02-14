/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:04:02 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/11 14:23:01 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cctype>
#include <cstddef>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <iterator>
#include <sstream>
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
            this->Map[date] = value;
    }

    // for (std::map<std::string, float>::iterator it = this->Map.begin();
    //         it != this->Map.end(); ++it)
    // {
    //     std::cout << it->first << " | " << it->second << std::endl;
    // }
}

bool BitcoinExchange::parse_line(std::string line) // --2 noting
{
    int input = std::atoi(line.c_str());
    if (!(input))
    {
        std::cout << "invalide input " << std::endl;
        return false;
    }
    for (size_t i = 0; i < 10; i++)
    {
        while (isspace(line[i]))                         /* checking spaces in the beginig */
            i++;
        if ((isdigit(line[i]) || ((i == 4 || i == 7) && line[i] == '-')) || (i == 10 && line[i] == ' ') )
            continue;
        else
        {
            std::cerr << "Error " << std::endl;
            return false;
        }
    }
    int c = 0;
    for (size_t i = 13; i < line.length(); i++)
    {   
        if ((isdigit(line[i]) || line[i] == '.') && c <= 1)
        {
            if (line[i] == '.')
                c++;
            if (c == 2)
            {
                std::cerr << "Error" << std::endl;
            return false;
            }
            continue;
        }
        else {
    
            std::cerr << "Error" << std::endl;
            return false;
        }
    }
    if (line.substr(0,4) < "2009" || line.substr(8,2) <= "01")
    {
        std::cerr << "Error : not found in DB " << std::endl;
        return false;
    }
    int y = std::atoi(line.substr(0,4).c_str());
    if (line.substr(5,2) == "02")
    {
        if ((y % 4 == 0) && line.substr(8,2) > "29")
        {
            std::cerr << "Error : invalide date " << line.substr(0,10) << std::endl;
            return false;
        }
        else if ((y % 4 != 0) && line.substr(8,2) > "28")
        {
            std::cerr << "Error : invalide date " << line.substr(0,10) << std::endl;
            return false;
        }
    }
    if((line.substr(5,2) == "04" || line.substr(5,2) == "06" || line.substr(5,2) == "09"
       || line.substr(5,2) == "11") && line.substr(8,2) == "31")   // 4 6 9 11
    {
        std::cerr << "Error syntax input" << std::endl;           /* checking " | " format */
        return false;
    } 
    if(!(line.substr(10,3) == " | "))
    {
        std::cerr << "Error syntax input" << std::endl;          /* checking " | " format */
        return false;
    }
    for (size_t i = 0; i < line.length(); i++)
    {
        if (line[i] == '|')
        {
            i++;
            if (isspace(line[i]) && (!isdigit(line[i + 1])))
            {
                std::cerr << "Error " << std::endl;
                return false;
            }
            if (isspace(line[i]) && isspace(line[i + 1]))
            {
                std::cerr << "Error " << std::endl;
                return false;
            }
        }
    }
    return true;
}

bool BitcoinExchange::parse_date_and_value(std::string date, float value)
{
    std::tm time;
    
    if (!(strptime(date.c_str(), "%Y-%m-%d", &time)))
    {
        std::cerr << "Error: bad input => " << date << std::endl;
        return false;
    }
    if (value < 0 || value > 1000)
    {
        std::cerr << "invalid value " << std::endl;
        return false;
    }
    return true;
}

void BitcoinExchange::exchange(char **av)
{
    std::ifstream input(av[1]);
    std::string line;

    if (!input.is_open())
        std::cerr << "failed to open file " << av[1] << std::endl;
    std::getline(input, line);
    while (std::getline(input, line))
    {
        if (BitcoinExchange::parse_line(line) == false)
            continue;
        std::istringstream iss(line);
        std::string date;
        float value;
        if (std::getline(iss, date, '|') && iss >> value && parse_line(line) == true)
        {
            date.erase(10,1);
            if (BitcoinExchange::parse_date_and_value(date, value) == false)
                continue;
            std::map<std::string, float>::iterator it = this->Map.find(date);
            if(it != this->Map.end())
                std::cout << date << " => " << value << " = " << it->second * value << std::endl;
            else
            {
                it = this->Map.lower_bound(date);
                it--;
                std::cout << date << " => " << value << " = " << it->second * value << std::endl;
            }
        }
    }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& b) { *this = b; }
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& b)
{
    this->Map = b.Map;
    return (*this);
}
BitcoinExchange::~BitcoinExchange() {}

