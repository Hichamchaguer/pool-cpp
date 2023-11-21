/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 02:43:00 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/16 17:11:22 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"


class ScavTrap : virtual public ClapTrap
{     
    public :
        ScavTrap();
        virtual ~ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& Scav);
        ScavTrap& operator=(ScavTrap const & Scav);
        void attack(const std::string& target);
        void guardGate();
};

#endif