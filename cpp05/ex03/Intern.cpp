/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:50:57 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/09 18:54:15 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern()
{
    std::cout << "intern default constractor called" << std::endl;
}

Intern::Intern(Intern const &i)
{
    std::cout << "intern copy constractor called " << std::endl;
    *this = i;
}

Intern& Intern::operator=(Intern const &i)
{
    return (*this);
}

Intern::~Intern()
{
    std::cout << "intern destractor called " << std::endl;
}