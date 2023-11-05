/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 02:43:00 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/05 02:43:02 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"


class ScavTrap :virtual public ClapTrap
{     
    public :
        ScavTrap();
        ~ScavTrap();
        void guardGate();
};

std::ostream& operator<<(std::ostream &o, ClapTrap &scav);
#endif