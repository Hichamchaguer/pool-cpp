/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 22:06:25 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/23 18:57:11 by hchaguer         ###   ########.fr       */
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

class A : public Base { ~A(); };
 
class B : public Base { ~B(); };
 
class C : public Base { ~C(); };


#endif