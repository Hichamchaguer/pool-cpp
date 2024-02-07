/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:20:58 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/07 14:16:36 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span {

    private :

        std::vector<int> vec;
        unsigned int N;

    public :

        Span();
        Span(const Span &s);
        Span operator=(const Span &s);
        ~Span();

        Span(unsigned int n);
        void    addNumber(int n);
        int     shortestSpan();
        int    longestSpan();
        void    addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
      
};

#endif