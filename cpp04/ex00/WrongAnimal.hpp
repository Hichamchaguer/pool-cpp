/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 08:15:26 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/13 08:18:09 by hchaguer         ###   ########.fr       */
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
        std::string get_type() const;
        void makeSound() const;
        WrongAnimal& operator=(WrongAnimal const &animal);
        ~WrongAnimal();
};

#endif