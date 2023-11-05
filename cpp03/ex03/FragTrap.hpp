/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 02:43:14 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/05 02:43:15 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"


class FragTrap : public ClapTrap {
  
    public : 
        FragTrap();
        ~FragTrap();
        void highFivesGuys(void);  
};

std::ostream& operator<<(std::ostream &o, ClapTrap const &clap);

#endif