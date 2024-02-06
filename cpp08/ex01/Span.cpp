/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:18:25 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/06 01:08:23 by hchaguer         ###   ########.fr       */
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

void Span::AddNumber(int n) 
{
    std::cout << vec.size() << std::endl;  // use static variable 
    if (this->vec.size() == this->N)
        throw std::runtime_error("Vector is already filled");
    else
        this->vec.push_back(n);
}

Span::~Span() { }