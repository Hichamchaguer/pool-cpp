/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 06:27:05 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/13 13:19:25 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();

    // std::cout << j->get_type() << std::endl;
    // std::cout << i->get_type() << std::endl;
    // delete j;//should not create a leak
    // delete i;
    
    int n = 4;
    Animal *a[n];

    for (int i = 0; i <  (n / 2); i++)
    {
        std::cout << "i : " << i <<std::endl;
        a[i] = new Dog();
    }

    for (int i = (n / 2); i < n; i++)
    {
        
        std::cout << "i : " << i <<std::endl;
            a[i] = new Cat();
    }

    for (int i = 0; i < n; i++)
        delete a[i];
    return 0;
}