/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:30:08 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/24 23:24:51 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() { }

ScalarConverter::ScalarConverter(const ScalarConverter& s) { 

    *this = s;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& s) { 

    (void)s;
    return (*this);
}

ScalarConverter::~ScalarConverter() { }

void ScalarConverter::convert(std::string &str)
{
    (void)str;
}