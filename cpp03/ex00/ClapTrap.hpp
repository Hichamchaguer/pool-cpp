/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:44:48 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/04 00:35:09 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>


class ClapTrap {
  
    private :
    
        std::string Name;
        int  Points;
        int  Pts_Energy;
        int  Attack;
        
    public :

        ClapTrap();
        ClapTrap(std::string const &name);
        ClapTrap(ClapTrap const &clapTrap);
        ~ClapTrap();
        std::string get_ClapTrap();
        ClapTrap& operator=(ClapTrap &clapTrap);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

std::ostream& operator<<(std::ostream &o, ClapTrap const &clap);
#endif