/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:40:08 by hchaguer          #+#    #+#             */
/*   Updated: 2023/10/13 20:15:16 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>

using namespace std;

class Contact{
    
    private :
        int     num_phone;
        string  fisrtName;
        string  lastName;
        string  nickName;
        string  darkest_secret;
};

#endif