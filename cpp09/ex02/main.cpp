/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 04:01:06 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/14 01:27:09 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <exception>
#include <iostream>

int main(int ac, char **av)
{

    if (ac == 1)
    {
        std::cerr << "Invalid argument " << std::endl;
        return 1;
    }
    
    try{
        
        PMergeMe merge;

        merge.merge_sort(ac, av);
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
        
    return 0;
}