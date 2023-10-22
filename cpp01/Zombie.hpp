/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:40:13 by hchaguer          #+#    #+#             */
/*   Updated: 2023/10/22 17:08:11 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

    private:
        std::string name;

    public : 
        Zombie();
        Zombie(std::string Name);
        void announce();
        Zombie* newZombie(std::string name);
        //void    randomChump(std::string name);
};

#endif
