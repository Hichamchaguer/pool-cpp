/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 06:28:33 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/20 18:06:06 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>


class Animal {
    
    protected :
        std::string Type;
        
    public :
        
        Animal();
        Animal(Animal const &animal);
        Animal& operator=(Animal const &animal);
        virtual ~Animal();
        
        virtual void makeSound() const = 0;
        std::string get_type() const;
};

#endif
