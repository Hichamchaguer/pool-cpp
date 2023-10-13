/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:05:05 by hchaguer          #+#    #+#             */
/*   Updated: 2023/10/13 14:45:29 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

string  toUpper(string str)
{
    int i = 0;

    while (str[i])
    {
        str[i] = toupper(str[i]);
        i++;
    }
    return (str);
} 

int main(int ac, char **av)
{
    if (ac == 1)
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< endl;
    else {
        int i = 1;
        while (i < ac)
        {
            cout << toUpper(av[i]) << " ";
            i++;
        }
        cout << endl;
    }
}