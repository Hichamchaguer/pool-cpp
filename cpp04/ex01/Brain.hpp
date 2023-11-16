/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 08:33:37 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/14 14:13:04 by hchaguer         ###   ########.fr       */
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
        ~Brain();
        Brain();
        Brain(Brain const &b);
        std::string get_idea() const;
       Brain& operator=(Brain const &b);
};

#endif