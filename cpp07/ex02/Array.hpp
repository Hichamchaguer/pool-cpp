/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:13:27 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/30 15:49:47 by hchaguer         ###   ########.fr       */
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
        for (size_t i = 0 ; i < this->N ; i++)
          this->tab[i] = t.tab[i];
      }
      
      Array<T> operator=(const Array<T> &t)
      {
        this->tab = new T[t.N];
        this->N = t.N; 
        for (size_t i = 0 ; i < this->N ; i++)
          this->tab[i] = t.tab[i];
        return (*this);
      }
      T& operator[](unsigned int n)
      {
        if (n > this->N)
          throw std::out_of_range();
      }

      unsigned int size()
      {
        return this->N;
      }
      
      ~Array()
      {
        delete tab;
      }
};

#endif