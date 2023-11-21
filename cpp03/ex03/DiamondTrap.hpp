/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 02:34:40 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/16 13:45:32 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"


class DiamondTrap : public FragTrap, public ScavTrap {
    
    private :
        std::string Name;
        
    public :
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap &d);
        void attack(const std::string& target);
        DiamondTrap& operator=(DiamondTrap &d);
        virtual ~DiamondTrap();
        void whoAmI();
        
};

#endif