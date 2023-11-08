/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 02:33:52 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/06 22:51:46 by hchaguer         ###   ########.fr       */
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
        int  Attack;
        
    public :

        ClapTrap();
        ClapTrap(std::string const &name);
        ClapTrap(ClapTrap &clapTrap);
        ~ClapTrap();
        std::string get_ClapTrap();
        void set_name(std::string const name);
        ClapTrap& operator=(ClapTrap &clapTrap);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

std::ostream& operator<<(std::ostream &o, ClapTrap const &clap);
#endif