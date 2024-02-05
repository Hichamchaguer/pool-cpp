/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 20:47:14 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/05 15:17:55 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <array>


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
        throw std::exception();
    
}


#endif