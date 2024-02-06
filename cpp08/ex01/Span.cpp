/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:18:25 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/06 18:12:55 by hchaguer         ###   ########.fr       */
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
    this->vec = s.vec;
    this->N = s.N;
    return *this;
}

void Span::AddNumber(int n) 
{
    static unsigned int i;

    if (i == this->N)
        throw std::out_of_range("out of range");
    else
        this->vec.push_back(n);
    i++;
}

int Span::shortestSpan()
{
    unsigned int min;
    std::vector<int> distence;
    
    std::sort(this->vec.rbegin(), this->vec.rend());
    
    for (size_t i = 0; i < vec.size() - 1; i++)
        distence.push_back(vec[i] - vec[i + 1]);
    std::vector<int>::iterator i = std::min_element(distence.begin(), distence.end());
    min = *i;
    
    return (min);
}

Span::~Span() { }