/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:24:02 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/23 18:56:35 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <cstddef>
#include <exception>
#include <ostream>
#include <typeinfo>

Base::~Base() { std::cout << "destractor Base called " << std::endl; }
A::~A() { std::cout << "destractor A called " << std::endl; }
B::~B() { std::cout << "destractor B called " << std::endl; }
C::~C() { std::cout << "destractor C called " << std::endl; }

/* It randomly instanciates A, B or C and returns the instance as a Base pointer */

Base* Base::generate()
{
    Base* b;
    srand(time(0));
    int random = rand() % 3;
    
    switch (random)
    {
        case 0 :
            b = new A();
            break;
        case 1 :
            b = new B();
            break;
        case 2 :
            b = new C();
            break;
    }
    return (b);
}

// It prints the actual type of the object pointed to by p: "A", "B" or "C".

void Base::identify(Base* p)
{
    try {
        
        if (dynamic_cast<A*>(p))
            std::cout << "object A called" << std::endl;
        else if (dynamic_cast<B*>(p))
            std::cout << "object B called" << std::endl;
        else if (dynamic_cast<C*>(p))
            std::cout << "object C called" << std::endl;
        else if (p == NULL)
            throw std::bad_cast();
    }
    catch(std::exception& e)
    {
        std::cout << "Error : " << e.what() << std::endl;
    }
}


/*It prints the actual type of the object pointed to by p: "A", "B" or "C". Using a pointer
inside this function is forbidden.*/

void Base::identify(Base& p)
{
    try {
        
        if (dynamic_cast<A*>(&p))
            std::cout << "object A called ref" << std::endl;
        else if (dynamic_cast<B*>(&p))
            std::cout << "object B called ref" << std::endl;
        else if (dynamic_cast<C*>(&p))
            std::cout << "object C called ref" << std::endl;
        
    } catch (std::bad_cast &e) {
        
        std::cout << "Error : " << e.what() << std::endl;
    }
}