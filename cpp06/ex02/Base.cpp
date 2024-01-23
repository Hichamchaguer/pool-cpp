/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:24:02 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/23 11:37:29 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <cstddef>
#include <ostream>
#include <typeinfo>

Base::~Base() { std::cout << "destractor Base called " << std::endl; }
A::~A() { std::cout << "destractor A called " << std::endl; }
B::~B() { std::cout << "destractor B called " << std::endl; }
C::~C() { std::cout << "destractor C called " << std::endl; }

void Base::print()
{
    std::cout << "this is instance Base " << std::endl;
}

Base* Base::generate()
{
    Base* b = new Base();
    srand(time(0));
    int random = rand() % 3;
    
    switch (random)
    {
        case 0 :
            b = new A();
            std::cout << "---> " << b << std::endl;
            break;
        case 1 :
            b = new B();
            std::cout << "---> " << b << std::endl;
            break;
        case 2 :
            b = new C();
            std::cout << "---> " << b << std::endl;
            break;
    }
    return (b);
}

// It prints the actual type of the object pointed to by p: "A", "B" or "C".

void Base::identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "object A called" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "object B called" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "object C called" << std::endl;
    else if (p == NULL)
        std::cout << "object NULL " << std::endl;
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