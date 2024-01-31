/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:13:27 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/30 18:04:48 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <iostream>
#include <stdlib.h>
#include <stdexcept>

template <typename T > 

class Array {

    private :
     
        T *tab;
        unsigned int N;
        
    public :
    
      Array<T>() : tab(NULL), N(0) {}
      
      Array<T>(unsigned int n) : N(n) { 
        
        tab = new T[N];
      }
      
      Array<T>(const Array<T> &t) : N(0)
      {
        *this = t;
      }
      
      Array<T>& operator=(const Array<T> &t)
      {
        if (N > 0)
          delete tab;
        this->tab = new T[t.N];
        this->N = t.N;
        for (size_t i = 0 ; i < this->N ; i++)
          this->tab[i] = t.tab[i];
        return (*this);
      }

      
      T& operator[](unsigned int n)
      {
        if (n >= this->N)
          throw std::out_of_range("error : out of range");
        return (this->tab[n]);
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