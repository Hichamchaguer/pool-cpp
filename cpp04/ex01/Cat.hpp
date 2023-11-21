/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 06:31:06 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/20 12:57:47 by hchaguer         ###   ########.fr       */
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
    
    public : 
        Brain *brain;

        Cat();
        Cat(Cat const &cat);
        Cat& operator=(Cat const &cat);
        virtual ~Cat();
        
        void makeSound() const;
        Brain* get_brain();
        
};

#endif