/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:50:21 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/03 15:50:21 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef Fixed_hpp
#define Fixed_hpp

#include <iostream>
#include <cmath>

class fixed {

    private :

        int value;
        static int const  fractionalBits = 8;

    public :

        fixed();
        ~fixed();
        fixed(int const rawBits);
        fixed(float const rawBits);
        fixed(fixed const &test1);
        int getRawBits() const;
        void setRawBits(int const raw);
        fixed& operator=(fixed const &t);
        bool operator>(fixed const &t);
        bool operator<(fixed const &t);
        bool operator>=(fixed const &t);
        bool operator<=(fixed const &t);
        bool operator==(fixed const &t);
        bool operator!=(fixed const &t);
        fixed operator+(fixed const &t);
        fixed operator-(fixed const &t);
        fixed operator*(fixed const &t);
        fixed operator/(fixed const &t);
        fixed& operator++();
        fixed& operator--();  
        fixed operator++(int);
        fixed operator--(int);
        static fixed& min(fixed &a, fixed &b);
        static fixed& max(fixed &a, fixed &b);
        static const fixed& min(fixed const &a, fixed const &b);
        static const fixed& max(fixed const &a, fixed const &b);
        float toFloat( void ) const;
        int toInt( void ) const;

};

std::ostream& operator<<(std::ostream &o, fixed const &fixed);

#endif