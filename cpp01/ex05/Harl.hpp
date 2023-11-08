/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 11:55:50 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/06 17:32:57 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl {
  
    private:
        void debug();
        void info();
        void warning();
        void error();
             
    public:
        Harl();
        ~Harl();
        void   complain(std::string level);
};

#endif