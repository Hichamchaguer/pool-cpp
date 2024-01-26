/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 06:31:06 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/25 22:26:27 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define Cat_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"



 class Animal {
    
    protected :
        std::string Type;
        
    public :
        
        Animal();
        Animal(Animal const &animal);
        Animal& operator=(Animal const &animal);
        virtual ~Animal();
        
        virtual void makeSound() const;
        std::string get_type() const;
};

class Cat : public Animal {

    void makeSound() const;
   
        
};

#endif