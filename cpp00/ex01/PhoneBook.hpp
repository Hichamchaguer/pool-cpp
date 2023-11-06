/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:49:07 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/06 16:41:03 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "contact.hpp"

class PhoneBook {
    
    private :
    
        Contact contact[8];
        int     index;
        
    public:
    
        PhoneBook();
        void    add();
        void    displyContacts();
        bool    isValid(std::string str);
        bool    whiteSpaces(std::string str);
        bool    is_NonPrintable(std::string str);
        int     getIndex();
};

#endif