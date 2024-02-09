/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teat.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:05:07 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/08 16:25:09 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <set>
#include <iostream>
#include <map>




int main()
{
    std::map<std::string ,int> _map;

    _map.insert({"hicham", 1});
    _map.insert({"am", 12});
    _map.insert({"hich", 13});


    std::map<std::string, int>::iterator it;

    for (it = _map.begin(); it != _map.end(); ++it)
    {
        std::cout <<"name : " << it->first << ", number : "<<it->second << std::endl;
    
    }
    
    std::cout <<  "---------------\n";
    it = _map.erase(_map.find("hicham"));
    for (it = _map.begin(); it != _map.end(); ++it)
    {
        std::cout <<"name : " << it->first << ", number : "<<it->second << std::endl;
    
    }

}