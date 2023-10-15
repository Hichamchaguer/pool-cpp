/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:23:34 by hchaguer          #+#    #+#             */
/*   Updated: 2023/10/15 21:09:51 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "contact.hpp"
#include <iostream>
#include <unistd.h>


void fill_contact()
{
    int num;
    string first, last, nick, dark;
    
    cout<< "num : ";
    std::cin >> num ;
     cout<< "first name : ";
    std::cin >> first;
     cout<< "last name : ";
    std::cin >> last;
     cout<< "nick Name : ";
    std::cin >> nick;
     cout<< "dark side : ";
    std::cin >> dark;
    
    Contact contact(num, first, last, nick, dark);
}

void search(void)
{
    
}


int main()
{
    string str;

    while (1)
    {
        cout << "enter a command ! ";
        cin >> str;
        
        if (str.compare("EXIT") != 0 && str.compare("ADD") != 0 && str.compare("SEARCH") != 0){
            
            cout<<" please enter one of the following command ! "<<endl;
            cout<<"{ ADD, SEARCH, EXIT }"<<endl;
            cout<<endl;
            
        }
        if (str.compare("ADD") == 0)
            fill_contact();
        
        if (str.compare("SEARCH") == 0)
        {
             cout<<"SEARCH"<<endl;
        }
        if (str.compare("EXIT") == 0)
        {
            cout<< "EXIT PROGARM"<< std::endl;
             exit(0);
        }
    }
}


