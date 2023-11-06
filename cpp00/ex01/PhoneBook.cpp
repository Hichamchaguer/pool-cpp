/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:49:04 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/06 16:49:09 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "contact.hpp"


PhoneBook::PhoneBook() : index(0) {}

void  PhoneBook::add() {

    Contact new_contact;
    std::string first, last, nick, dark, num;

    std::cout << "fisrt name : ";
    std::getline(std::cin, first);
    if (std::cin.eof()) {
            exit (EXIT_FAILURE);
    }
    while (first.empty() || whiteSpaces(first) || is_NonPrintable(first))
    {
        std::cout << "this field should not be empty !!" << std::endl;
        std::cout << "fisrt name : ";
        std::getline(std::cin, first);
        if (std::cin.eof()) {
            exit (EXIT_FAILURE);
        }
    }

    std::cout << "last name : ";
    std::getline(std::cin, last);
    if (std::cin.eof()) {
        exit (EXIT_FAILURE);
    }
     while (last.empty() || whiteSpaces(last) || is_NonPrintable(last))
    {
        std::cout << "this field should not be empty !!" << std::endl;
        std::cout << "last name : ";
        std::getline(std::cin, last);
        if (std::cin.eof()) {
            exit (EXIT_FAILURE);
        }
    }
    
    std::cout << "nick Name : ";
    std::getline(std::cin, nick);
    if (std::cin.eof()) {
        exit (EXIT_FAILURE);
    }
     while (nick.empty() || whiteSpaces(nick) || is_NonPrintable(nick))
    {
        std::cout << "this field should not be empty !!" << std::endl;
        std::cout << "nick name : ";
        std::getline(std::cin, nick);
        if (std::cin.eof()) {
            exit (EXIT_FAILURE);
        }
    }

    std::cout << "Number : ";
    std::getline(std::cin, num);
    if (std::cin.eof()) {
        exit (EXIT_FAILURE);
    }
    if (isValid(num) == false)
        std::cout << "this field should has digits !!" << std::endl;
    if (num.empty())
         std::cout << "this field should not be empty !!" << std::endl;
    while (isValid(num) == false || num.empty() || whiteSpaces(num) || is_NonPrintable(num)) {
        
        std::cout << "Number : ";
        std::getline(std::cin, num);
        if (std::cin.eof()) {
            exit (EXIT_FAILURE);
        }
        if (isValid(num) == false)
            std::cout << "this field should has digits !!" << std::endl;
    }
    
    std::cout << "dark secret : ";
    std::getline(std::cin, dark);
    if (std::cin.eof()) {
        exit (EXIT_FAILURE);
    }
    while (dark.empty() || whiteSpaces(dark) || is_NonPrintable(dark))
    {
        std::cout << "this field should not be empty !!" << std::endl;
        std::cout << "dark name : ";
        std::getline(std::cin, dark);
        if (std::cin.eof()) {
            exit (EXIT_FAILURE);
        }
    }

    new_contact.set_fname(first);
    new_contact.set_lname(last);
    new_contact.set_nickname(nick);
    new_contact.setNumPhone(num);
    new_contact.set_dark(dark);
    
    contact[index % 8] = new_contact;
    index++;
}

bool    PhoneBook::isValid(std::string str) {

    for (long unsigned int i = 0; i < str.length(); i++)
    {
        if (isalpha(str[i]) != 0)
            return false;
    }
    return true;
}

bool    PhoneBook::whiteSpaces(std::string str)
{
    for (long unsigned int i = 0; i < str.length(); i++)
    {
        if (std::isspace(str[i]))
            return true;
    }
    return false;
}

bool PhoneBook::is_NonPrintable(std::string str) {
    
    for (long unsigned int i = 0; i < str.length(); i++) {
        if (std::iscntrl(str[i]))
            return true;
    }
    return false;
}

int     PhoneBook::getIndex()
{
    int index = 0;
    int good = 0;
    do
    {
        std::cout << "enter the index or press -1 to exit search field : ";
        std::cin >> index;
        if (std::cin.eof()) {
            exit (EXIT_FAILURE);
        }
        if (std::cin.good()){
            good = 1;
        }
        else
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "invalid index !\n";
        }
    } while (!good);
    return (index);
}

void    PhoneBook::displyContacts()
{
        int i = 0;
        int n;
        
        std::cout << std::setw(10) << "     index" << " | " 
        << std::setw(10) << " firstname" << " | " << "  lastname" << " | " << "  nickName" << " | " << std::endl;
        
        int max = index < 8 ? index : 8;
        for (i = 0; i < max; i++) {
            
            std::cout << std::setw(10) << i + 1 << " | " ;
            if (contact[i].get_fname().length() > 9)
                std::cout << std::setw(10) << contact[i].get_fname().substr(0, 9) + '.' << " | ";
            else
                std::cout << std::setw(10) << contact[i].get_fname() << " | " ;
            if (contact[i].get_lname().length() > 9)
            std::cout << std::setw(10) << contact[i].get_lname().substr(0, 9) + '.' << " | ";
            else
                std::cout << std::setw(10) << contact[i].get_lname() << " | ";
            if (contact[i].get_nickNmae().length() > 9)
            std::cout << std::setw(10) << contact[i].get_nickNmae().substr(0, 9) + '.' << " | " << std::endl;
            else
                std::cout << std::setw(10) << contact[i].get_nickNmae() << " | " << std::endl;
        }
        while (true)
        {
            n = getIndex();
             std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            if (n == -1)
                break;
            if (std::cin.eof())
                exit (EXIT_FAILURE);
            if (n >= 1 && n <= max)
                contact[n - 1].display();
            else
                std::cout << "there is no contact with this index !" << std::endl;
    }

}