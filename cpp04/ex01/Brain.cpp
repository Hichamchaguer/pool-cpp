/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 08:36:57 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/14 02:45:49 by hchaguer         ###   ########.fr       */
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

std::string Brain::get_idea() const
{
    return (this->ideas[100]);
}

Brain& Brain::operator=(Brain const &b)
{
    this->ideas[100] = b.get_idea();
    return *this;     
}