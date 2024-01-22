/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:24:02 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/22 21:49:32 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <cstddef>
#include <ostream>

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
    Base* b = dynamic_cast<Base*>(p);
    b->print();
    if (b == NULL)
        std::cout << "the instance is NULL " << std::endl;
}


/*It prints the actual type of the object pointed to by p: "A", "B" or "C". Using a pointer
inside this function is forbidden.*/

void Base::identify(Base& p)
{
    Base& b = dynamic_cast<Base &>(p);
    b.print();
}