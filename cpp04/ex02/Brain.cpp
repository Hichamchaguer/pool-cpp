/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 08:36:57 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/20 09:23:21 by hchaguer         ###   ########.fr       */
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
    std::cout << "Brain copy constrictor called" << std::endl;
    *this = b;
}

std::string Brain::get_idea(int i) const
{
    if (i < 0)
        return ("");
    else
        return (this->ideas[i]);
}

Brain& Brain::operator=(Brain const &b)
{
    std::cout << "Brain assignement operator called" << std::endl;
     for (int i = 0; i < 100; i ++)
     {
         this->ideas[i] = b.get_idea(i);
     }
    return *this;
}
