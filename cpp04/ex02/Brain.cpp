/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 08:36:57 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/14 00:36:15 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "brain's default constrictor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "brain's destractor called" << std::endl;
}

Brain::Brain(Brain const &b)
{
    *this = b;
}

// Brain& Brain::operator=(Brain const &b)
// {
   
// }