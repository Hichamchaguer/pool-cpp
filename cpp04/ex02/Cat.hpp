/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 06:31:06 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/20 18:03:24 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define Cat_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

    private :
    
        Brain *brain;
    public : 

        Cat();
        Cat(Cat const &cat);
        Cat& operator=(Cat const &cat);
        ~Cat();
        
        void makeSound() const;
        
};

#endif