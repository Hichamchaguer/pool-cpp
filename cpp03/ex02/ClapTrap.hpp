/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 23:53:00 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/15 10:25:43 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
  
    protected :
    
        std::string Name;
        int  Points;
        int  Pts_Energy;
        int  AttackDamage;
        
    public :

        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &clap);
        ~ClapTrap();
        std::string const &get_Name() const;
        ClapTrap& operator=(ClapTrap const &clapTrap);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif