/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:18:25 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/05 20:55:28 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"

Span::Span() { this->N = 0; }

Span::Span(unsigned int n) : N(n) { }

Span::Span(const Span &s)
{
    *this = s;
}

Span Span::operator=(const Span &s)
{
    this->N = s.N;
    return *this;
}

void Span::AddNumber(unsigned int n) 
{
    int array[this->N];
    static int i;

    array[i] = n;
    std::cout << array[i] << std::endl;
    i++;
}

Span::~Span() { }