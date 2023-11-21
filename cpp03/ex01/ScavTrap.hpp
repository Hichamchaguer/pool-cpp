/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 02:42:46 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/05 02:42:46 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{     
    public :
        ScavTrap();
        ~ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &Scav);
        ScavTrap& operator=(ScavTrap const & Scav);
        void attack(const std::string& target);
        void guardGate();
};

#endif