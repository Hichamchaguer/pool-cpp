/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:30:17 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/24 15:30:17 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERT_HPP
#define SCALARCONVERT_HPP


#include <iostream>

class ScalarConverter 
{
    private :
        ScalarConverter();
        ScalarConverter(const ScalarConverter& s);
        ScalarConverter& operator=(const ScalarConverter& s);
        ~ScalarConverter();

    public :
        static void convert(std::string &str);
};


#endif