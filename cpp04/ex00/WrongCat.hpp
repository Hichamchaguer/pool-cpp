/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 08:14:27 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/13 08:21:38 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCat_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal {

    public : 

        WrongCat();
        WrongCat(WrongCat const &cat);
        void makeSound() const;
        WrongCat& operator=(WrongCat const &cat);
        ~WrongCat();
        
};

#endif