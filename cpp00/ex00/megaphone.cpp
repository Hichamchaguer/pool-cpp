/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:05:05 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/06 16:38:23 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

std::string  toUpper(std::string str)
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
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
    else {
        int i = 1;
        while (i < ac)
        {
            std::cout << toUpper(av[i]);
            i++;
        }
        std::cout << std::endl;
    }
}