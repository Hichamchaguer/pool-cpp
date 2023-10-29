/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 11:47:48 by hchaguer          #+#    #+#             */
/*   Updated: 2023/10/28 11:47:48 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define  HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"


class HumanB {
    private :
        std::string Name;
        Weapon *p;
    public :
        HumanB(std::string n);
        ~HumanB();
        void setWeapon(Weapon &w);
        std::string getHumanB();
        void  setHumanB(std::string name);
       void attack();

};


#endif