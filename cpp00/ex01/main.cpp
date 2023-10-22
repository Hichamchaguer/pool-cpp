/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:23:34 by hchaguer          #+#    #+#             */
/*   Updated: 2023/10/21 18:47:28 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "contact.hpp"

int main()
{
    PhoneBook phone;
    std::string str;

    while (true)
    {
        std::cout << "enter a command ! {ADD, SEARCH, EXIT}: " ;
        std::getline(std::cin, str);
        if (std::cin.eof()) {
            exit (EXIT_FAILURE);
        }
        
        if (str != "EXIT"  && str != "ADD"  && str != "SEARCH") {
            
            std::cout<<"please enter one of the following command ! " << std::endl;
            std::cout<<"{ ADD, SEARCH, EXIT } " << std::endl;
            std::cout << std::endl;
        }
        if (str == "ADD")
        {
            phone.add();
        }
        if (str == "SEARCH")
        {
            phone.displyContacts();
        }
        if (str == "EXIT")
        {
            std::cout << "EXIT PROGARM" << std::endl;
             exit(0);
        }
    }
}
