/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:20:58 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/05 19:45:34 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span {

    private :
        unsigned int N;

    public :

        Span();
        Span(const Span &s);
        Span operator=(const Span &s);
        ~Span();

        Span(unsigned int n);
        void AddNumber(unsigned int n);
      
};

#endif