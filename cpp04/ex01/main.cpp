/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 06:27:05 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/20 14:58:53 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{    
    int n = 2;
    Animal *a[n];

    for (int i = 0; i < (n / 2); i++)
    {
        a[i] = new Dog();
    }

    for (int i = (n / 2); i < n; i++)
    {
        a[i] = new Cat();
    }

    for (int i = 0; i < n; i++)
    {
        a[i]->makeSound();
    }
    
    for (int i = 0; i < n; i++)
        delete a[i];

 
    // Cat c;
    // c.get_brain()->set_idea("hicham", 0);
    // Cat s = c;
    // std::cout <<"c : " << c.get_brain()->get_idea(0) << std::endl;
    // std::cout <<"s : " << s.get_brain()->get_idea(0) << std::endl;
    
    // s.get_brain()->set_idea("ahmed", 0);
    // std::cout << "c : "<<c.get_brain()->get_idea(0) << std::endl;
    // std::cout << "s : "<<s.get_brain()->get_idea(0) << std::endl;

    return 0;
}