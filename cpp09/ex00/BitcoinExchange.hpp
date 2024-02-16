/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:12:25 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/15 22:43:39 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <sstream>
#include <ctime>

class BitcoinExchange {

    private:
        
        std::map<std::string, float> Map;

    public :
        
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& b);
        BitcoinExchange &operator=(const BitcoinExchange& b);
        ~BitcoinExchange();

        void exchange(char **av);
        bool parse_date_and_value(std::string date,float value);
        bool parse_line(std::string line);
};

#endif