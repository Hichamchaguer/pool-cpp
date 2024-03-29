/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 02:43:14 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/16 13:45:20 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"


class FragTrap : virtual public ClapTrap {
  
    public : 
        FragTrap();
        FragTrap(std::string name);
        virtual ~FragTrap();
        FragTrap(FragTrap const &frag);
        FragTrap& operator=(FragTrap &frag);
        void highFivesGuys(void);  
};

#endif