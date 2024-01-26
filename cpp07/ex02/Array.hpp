/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:13:27 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/26 17:52:57 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <iostream>

template <typename T > 

class Array {

    private :
     
        T *tab;
        const unsigned int N;
        
    public :
      Array<T>() : tab(NULL), N(0) {}
      Array<T>(const unsigned int &n) : N(n) { 
        
        tab = new T[N]; 

        for (std::size_t i = 0; i < n; i++)
        {
            std::cout << tab[i] << std::endl;
        }
      }
      
};

#endif