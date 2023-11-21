/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 08:15:26 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/20 18:02:42 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>


class WrongAnimal {
    protected :
        std::string Type;
        
    public :
        
        WrongAnimal();
        WrongAnimal(WrongAnimal const &animal);
        WrongAnimal& operator=(WrongAnimal const &animal);
        ~WrongAnimal();
        
        std::string get_type() const;
        void makeSound() const;
};

#endif