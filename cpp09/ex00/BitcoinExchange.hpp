/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:12:25 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/09 16:16:02 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>

class BitcoinExchange {

    private:
        
        std::map<std::string, float> Map;

    public :
        
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& b);
        BitcoinExchange &operator=(const BitcoinExchange& b);
        ~BitcoinExchange();
};

#endif