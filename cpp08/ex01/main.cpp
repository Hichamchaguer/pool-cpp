/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:20:16 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/06 18:13:46 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try {

        Span s(5);

        s.AddNumber(3);
        s.AddNumber(5);
        s.AddNumber(4);
        s.AddNumber(1);
        s.AddNumber(6);
        
        int i = s.shortestSpan();
        std::cout << i << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << "Error : " << e.what() << std::endl;
    }
    
    return 0;
}