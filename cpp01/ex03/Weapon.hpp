/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 11:48:14 by hchaguer          #+#    #+#             */
/*   Updated: 2023/10/28 11:48:14 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Weapon_hpp
#define Weapon_hpp

#include <string>
#include <iostream>

class Weapon {

    private :
        std::string Type;

    public :
        Weapon();
        Weapon(std::string type);
        ~Weapon();
        const std::string& getType();
        void setType(std::string type);
};


#endif