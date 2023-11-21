/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 06:31:28 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/20 18:03:19 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    private :
    
        Brain *brain;
    public :

        Dog();
        Dog(Dog const &dog);
        Brain *GetBrain();
        Dog& operator=(Dog const &dog);
         ~Dog();
        
        void makeSound() const;
        
};

#endif