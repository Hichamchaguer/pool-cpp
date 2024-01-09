/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:49:04 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/09 18:52:47 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP


#include <iostream>


class Intern {

    public :
        Intern();
        Intern(Intern const &i);
        Intern& operator=(Intern const &i);
        ~Intern();
};


#endif