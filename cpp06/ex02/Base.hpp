/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 22:06:25 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/23 11:48:47 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <stdlib.h>

class Base {

    public:
        virtual ~Base();
        static Base * generate(void);
        static void identify(Base* p);
        static void identify(Base& p);
};

class A : public Base { ~A(); void print() { std::cout << "this is instance A " << std::endl;}};

class B : public Base { ~B(); void print() { std::cout << "this is instance B " << std::endl;}};

class C : public Base { ~C(); void print() { std::cout << "this is instance C " << std::endl;}};


#endif