/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:13:27 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/29 18:32:56 by hchaguer         ###   ########.fr       */
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
        unsigned int N;
        
    public :
    
      Array<T>() : tab(NULL), N(0) {}
      Array<T>(unsigned int &n) : N(n) { 
        
        tab = new T[N]; 

        for (std::size_t i = 0; i < n; i++)
        {
            std::cout << tab[i] << std::endl;
        }
      }
      
      Array<T>(const Array<T> &t)
      {
        *this = t;
      }
      
      Array<T> operator=(const Array<T> &t)
      {
        this->tab = t.tab;
        this->N = t.N; 
        return (*this);
      }
};

#endif