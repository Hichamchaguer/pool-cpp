/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 23:53:32 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/14 03:24:31 by hchaguer         ###   ########.fr       */
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
        FragTrap(std::string name);
        FragTrap(FragTrap const &frag);
        FragTrap& operator=(FragTrap &frag);
        void highFivesGuys(void);  
};


#endif