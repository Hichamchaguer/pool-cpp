/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:23:34 by hchaguer          #+#    #+#             */
/*   Updated: 2023/10/13 22:43:42 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <unistd.h>

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
            
        }
        if (str.compare("ADD") == 0)
        {
             cout<<"ADD"<<endl;
        }
        if (str.compare("SEARCH") == 0)
        {
             cout<<"SEARCH"<<endl;
        }
        if (str.compare("EXIT") == 0)
        {
             cout<<"EXIT"<<endl;
        }
    }
}