/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 08:33:37 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/18 02:16:41 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {

    private :

        std::string ideas[100];
    public :
    
        Brain();
        Brain(Brain const &b);
        Brain& operator=(Brain const &b);
        ~Brain();
    
        std::string get_idea(int i) const;
};

#endif