/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 02:33:52 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/16 00:37:25 by hchaguer         ###   ########.fr       */
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
        virtual ~ClapTrap();
        std::string const &get_Name() const;
        ClapTrap& operator=(ClapTrap const &clapTrap);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif