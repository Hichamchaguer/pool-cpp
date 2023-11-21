/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 06:27:05 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/20 09:33:29 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{    
    // int n = 2;
    // Animal *a[n];

    // for (int i = 0; i < (n / 2); i++)
    // {
    //     a[i] = new Dog();
    // }

    // for (int i = (n / 2); i < n; i++)
    // {
    //     a[i] = new Cat();
    // }

    // for (int i = 0; i < n; i++)
    //     delete a[i];

    // Animal a;                                  // a is an abstract class 
    // std::cout << a.get_type() << std::endl;
    
    Animal* i = new Dog();
     
    std::cout << i->get_type() << std::endl;
    
    delete i;
         
    return 0;
}