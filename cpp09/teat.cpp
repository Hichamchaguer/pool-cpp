/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teat.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:05:07 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/11 04:03:08 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <set>
#include <iostream>
#include <map>

int main()
{

    std::map<int ,int> map;
    int o = 2;

    for (size_t i = 0; i < 10; i++)
    {
        map[i] = i;
    }

    std::map<int,int>::iterator it;
    for (it = map.begin(); it != map.end(); ++it)
        std::cout << it->first << " " << it->second <<std::endl;

    it  = map.find(2);
    map.erase(it);

    it = map.lower_bound(o);
    std::cout << "---> " << it->first << std::endl;
    std::cout << " ---------------------" << std::endl;
    // for (it = map.begin(); it != map.end(); ++it)
    //     std::cout << it->first << " " << it->second <<std::endl;
    
    // map.lower_bound()
    // std::map<std::string ,int> _map;

    // _map.insert({"hicham", 1});
    // _map.insert({"am", 12});
    // _map.insert({"hich", 13});


    // std::map<std::string, int>::iterator it;

    // for (it = _map.begin(); it != _map.end(); ++it)
    // {
    //     std::cout <<"name : " << it->first << ", number : "<<it->second << std::endl;
    
    // }
    
    // std::cout <<  "---------------\n";
    // it = _map.erase(_map.find("hicham"));
    // for (it = _map.begin(); it != _map.end(); ++it)
    // {
    //     std::cout <<"name : " << it->first << ", number : "<<it->second << std::endl;
    
    // }

}