/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:20:16 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/07 14:44:45 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstddef>
#include <vector>

int main()
{
    try {

        Span s(10);

        s.addNumber(110);
        s.addNumber(8);
        s.addNumber(59);
        s.addNumber(15);
        s.addNumber(62);
        
        std::vector<int > vec1;
        for(size_t i = 0; i < 5; i++)
            vec1.push_back(i);
        
        s.addNumbers(vec1.begin(),vec1.end());
        std::cout << "short span : "<< s.shortestSpan() << std::endl;
        std::cout << "long span :  "<< s.longestSpan() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << "Error : " << e.what() << std::endl;
    }
    
    return 0;
}

// int main()
// {
//     Span sp = Span(5);
//     sp.addNumber(6);
//     sp.addNumber(3);
//     sp.addNumber(17);
//     sp.addNumber(9);
//     sp.addNumber(11);
//     std::cout << sp.shortestSpan() << std::endl;
//     std::cout << sp.longestSpan() << std::endl;
//     return 0;
// }