/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:40:08 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/06 16:46:45 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>
#include <iostream>
#include <iomanip>
#include <ctype.h>
#include <cstdlib>
#include <limits>


class Contact {
    
    private :
    
        std::string  num_phone;
        std::string  fisrtName;
        std::string  lastName;
        std::string  nickName;
        std::string  darkest_secret;

    public :
    
        Contact();
        std::string    get_num();
        std::string    get_fname();
        std::string    get_lname();
        std::string    get_nickNmae();
        std::string    get_dark();

        void           setNumPhone(std::string number);
        void           set_fname(std::string first);
        void           set_lname(std::string last);
        void           set_nickname(std::string nick);
        void           set_dark(std::string dark);
        void           display();
};

#include "PhoneBook.hpp"
#endif