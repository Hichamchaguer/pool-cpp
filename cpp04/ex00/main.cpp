/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 06:27:05 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/20 17:57:44 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->get_type() << " " << std::endl;
    std::cout << i->get_type() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    delete i;
    delete j;
    delete meta;
        
    // const WrongAnimal* m = new WrongAnimal();

    //  const WrongAnimal* n = new WrongCat();
    // std::cout << m->get_type() << " " << std::endl;
    // std::cout << n->get_type() << " " << std::endl;

    // m->makeSound(); //will output the cat sound!
    // n->makeSound();
    // delete n;
    // delete m;
    return 0;
}