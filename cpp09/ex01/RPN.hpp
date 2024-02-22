/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 14:25:39 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/16 17:57:50 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <cstring>

class RPN
{
    private:
        std::stack<int> Stack;

    public :
    
        RPN();
        RPN(const RPN &s);
        RPN& operator=(const RPN &s);
        ~RPN();

        void push_args(char *av);
        void calculator(char* str);
        bool check_operator(char *str, int i);
        bool check_args(char *str);
        void result(char *str);
        
};

#endif