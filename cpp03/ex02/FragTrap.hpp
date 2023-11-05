/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 23:53:32 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/04 23:59:50 by hchaguer         ###   ########.fr       */
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