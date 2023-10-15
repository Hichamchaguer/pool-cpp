/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:40:08 by hchaguer          #+#    #+#             */
/*   Updated: 2023/10/15 20:57:16 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>
#include <iostream>

using namespace std;

class Contact {
    
    private :
        int     num_phone;
        string  fisrtName;
        string  lastName;
        string  nickName;
        string  darkest_secret;

    public :

        Contact(int Num, string First, string Last, string Nick, string Dark);
};

#endif