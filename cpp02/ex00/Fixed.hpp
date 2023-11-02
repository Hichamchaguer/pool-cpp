/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:02:14 by hchaguer          #+#    #+#             */
/*   Updated: 2023/10/30 15:03:14 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_HPP
#define Fixed_HPP

#include <iostream>

class fixed {

    private :

        int value;
        static int const n = 8;

    public :

        fixed();
        ~fixed();
        fixed(fixed const &test1);
        int getRawBits() const;
        void setRawBits(int const raw);
        fixed& operator=(fixed const &t);

};

#endif