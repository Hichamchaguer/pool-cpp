/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 20:47:14 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/15 16:56:55 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <stdexcept>
#include <vector>
#include <deque>



template < typename T> 
void easyfind(T array, int i) {

    bool etat = false;
    
    
    for (size_t j = 0; j < array.size(); j++)
    {
        if (array.at(j) == i)
        {
            etat = true;
            std::cout << "the number " << i << " was found " << std::endl;
            break;
        }
    }
    if (etat == false)
        throw std::invalid_argument("the number was not found");
    
}


#endif