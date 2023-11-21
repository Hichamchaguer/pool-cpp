/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 06:31:28 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/20 15:18:19 by hchaguer         ###   ########.fr       */
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
        Dog& operator=(Dog const &dog);
        ~Dog();
        
        void makeSound() const;
        
};

#endif