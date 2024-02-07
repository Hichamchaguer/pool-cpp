/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:13:57 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/07 22:46:37 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP


#include <iostream>
#include <stack>

template <typename T >
class MutantStack : public std::stack<T> {
        
        public :
        
            MutantStack() : std::stack<T>() {}
            
            MutantStack(const MutantStack &m) :  std::stack<T>()
            {
                *this = m;
            }
            
            MutantStack& operator=(const MutantStack &m)
            {
                this->c = m.c;
                return (*this);
            }
            
            ~MutantStack() {}

            typedef typename std::deque<T>::iterator iterator;

            iterator begin()
            {
                return (this->c.begin());
            }

            iterator end()
            {
                return (this->c.end());
            }
};

#endif