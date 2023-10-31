/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:55:38 by hchaguer          #+#    #+#             */
/*   Updated: 2023/10/30 13:38:32 by hchaguer         ###   ########.fr       */
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