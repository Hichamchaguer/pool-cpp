/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 06:27:05 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/14 14:23:06 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    //const Animal* j = new Animal();
    const Animal* i = new Cat();

    //std::cout << j->get_type() << std::endl;
    std::cout << i->get_type() << std::endl;
    //delete j;//should not create a leak
    delete i;
    
    return 0;
}