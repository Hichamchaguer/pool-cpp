/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 11:47:38 by hchaguer          #+#    #+#             */
/*   Updated: 2023/10/28 11:47:38 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define  HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"


class HumanA {
    private :
        std::string Name;
        Weapon &w;
    public :
        HumanA(std::string n, Weapon &w);
        std::string getHumanA();
        void setHumanA(std::string name);
        ~HumanA();
        void attack();

};


#endif