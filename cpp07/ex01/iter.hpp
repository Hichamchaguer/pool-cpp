/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:41:08 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/31 00:49:27 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>


template <typename T , typename F > 
void iter(T* array, int lenght, F func) {
    
    for (int i = 0 ; i < lenght; i++)
    {
        func(array[i]);
    }
}

template<typename T> void print(T& t)
{
    std::cout << t << std::endl;
}


#endif