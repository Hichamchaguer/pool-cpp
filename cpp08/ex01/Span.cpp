/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:18:25 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/07 22:10:35 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"
#include <cstddef>
#include <vector>

Span::Span() { this->N = 0; }

Span::Span(unsigned int n) : N(n) { }

Span::~Span() { }

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

void Span::addNumber(int n) 
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
    if (this->vec.size() <= 1)
        return 0;
    unsigned int min;
    std::vector<int> distence;
    
    std::sort(this->vec.rbegin(), this->vec.rend()); 
    for (size_t i = 0; i < vec.size() - 1; i++)
        distence.push_back(vec[i] - vec[i + 1]);
    
    std::vector<int>::iterator i = std::min_element(distence.begin(), distence.end());
    min = *i;
    
    return (min);
}

int Span::longestSpan()
{
    if (this->vec.size() <= 1)
        return 0;
    
    int min, max;
    std::vector<int> distence;
    std::sort(this->vec.rbegin(), this->vec.rend());
    
    for (size_t i = 0; i < vec.size(); i++)
        distence.push_back(vec[i]);

    std::vector<int>::iterator i = std::min_element(distence.begin(), distence.end());
    std::vector<int>::iterator j = std::max_element(distence.begin(), distence.end());
    min = *i;
    max = *j;

    return (max - min);
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    std::vector<int>::iterator it;
    
    for (it = begin; it != end; ++it)
        this->addNumber(*it);
}