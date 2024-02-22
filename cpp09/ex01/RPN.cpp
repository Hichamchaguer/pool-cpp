/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:20:51 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/17 00:46:31 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <cctype>
#include <cstddef>
#include <exception>
#include <iostream>
#include <iterator>
#include <ostream>
#include <stack>
#include <stdexcept>

RPN::RPN() { }
RPN::RPN(const RPN &s) { *this = s; }
RPN& RPN::operator=(const RPN &s) { this->Stack = s.Stack; return *this; }
RPN::~RPN() { }


bool RPN::check_operator(char *str, int i)
{
    char tab[4] = {'+', '-','*','/'};

    for (int j = 0; j < 4; j++)
    {
        if (str[i] == tab[j])
            return true;
    }
    return false;
}

void RPN::calculator(char *str)
{
    size_t i = 0;
    int s1 = 0, s2 = 0, result;
    bool etat = false;

    for(i = 0; i < strlen(str); i++)
    {
        result = 0;
        if(isspace(str[i]))
            continue;
        if (isdigit(str[i]))
        {
            this->Stack.push(str[i] - 48);
            continue;
        }
        if (check_operator(str, i) == true && this->Stack.size() >= 2)
        {
            etat = true;
            s1 = this->Stack.top();
            this->Stack.pop();
            s2 = this->Stack.top();
            this->Stack.pop();
            
            if (str[i] == '+')
                result = s2 + s1;
            if (str[i] == '-')
                result = s2 - s1;
            if (str[i] == '*')
                result = s2 * s1;
            if (str[i] == '/')
            {
                if (s1 != 0)
                    result = s2 / s1;
                else
                    throw std::invalid_argument("Error : invalid argument");
            }
            this->Stack.push(result);
        }
        else
            throw std::invalid_argument("Error : invalid argument");
    }

    if (this->Stack.size() <= 2 && etat == false)
        throw std::invalid_argument("Error : invalid argument");
}

void RPN::result(char *str)
{
    calculator(str);
    
    if (this->Stack.size() == 1)
        std::cout << this->Stack.top() << std::endl;
    else
        throw std::invalid_argument("syntax Error");
    
}

/*
    check args  must be digits and operators
     
    check operator

    push rasult in stack check results
  
  */