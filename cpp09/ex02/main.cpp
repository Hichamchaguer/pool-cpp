/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 04:01:06 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/17 01:45:24 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <exception>
#include <iostream>

int main(int ac, char **av)
{

    if (ac <= 2)
    {
        std::cerr << "Error : Invalid argument " << std::endl;
        return 1;
    }
    
    try {
        
        PMergeMe merge;

        merge.merge_sort(ac, av);
    }
    catch(std::exception& e)
    {
        std::cout << "Error : "<< e.what() << std::endl;
    }
        
    return 0;
}