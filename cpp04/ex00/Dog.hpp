/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 06:31:28 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/13 07:50:08 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"


class Dog : public Animal {

    public :

        Dog();
        Dog(Dog const &dog);
        void makeSound() const;
        Dog& operator=(Dog const &dog);
        ~Dog();
        
};

#endif