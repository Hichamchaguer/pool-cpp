/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:41:56 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/06 15:49:05 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> vec;

    vec.push_back(11);
    vec.push_back(1);
    vec.push_back(10);
    vec.push_back(41);
    vec.push_back(5);

    
    std::sort(std::begin(vec), std::end(vec));
    
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
    {
        std::cout << *it << std::endl;
    }
}