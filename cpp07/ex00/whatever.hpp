/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:28:47 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/25 12:51:57 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T> 
void swap(T& a, T& b)
{
    T x;
    
    x = a;
    a = b;
    b = x;
}

template<typename T> T min(T a, T b)
{
    if (a == b)
        return (b);
    return (a < b ? a : b);
}

template<typename T> T max(T a, T b)
{
    if (a == b)
        return (b);
    return (a > b ? a : b);
}


#endif