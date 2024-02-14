/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 04:02:16 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/14 05:48:59 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <cctype>
#include <cstddef>
#include <stdexcept>
#include <cstring>


PMergeMe::PMergeMe() { }

PMergeMe::PMergeMe(const PMergeMe &m)
{
    *this = m;
}

PMergeMe& PMergeMe::operator=(const PMergeMe &m)
{
    this->vec = m.vec;
    this->it = m.it;
    this->last = m.last;
    return (*this);
}

bool check_len(int len)
{
    if ((len - 1) % 2 == 0)
        return true;
    return false;
}

void swap(int a, int b)
{
    int x;

    x = a;
    a = b;
    b = x;
}

void PMergeMe::fill_container(int ac, char **av)
{
    this->last = 0;
    
    if (check_len(ac) == true)
    {
        for (int i = 1; i < ac; i+=2)
        {
            // checking if the number positif
            this->vec.push_back(std::make_pair(atoi(av[i]), atoi(av[i + 1])));
        }
    }
    
    if (check_len(ac) == false)
    {
        for (int i = 1; i < ac; i+=2)
        {
            // checking if the number positif
            if (av[i] && av[i + 1] == NULL)
                this->last = atoi(av[i]);
            else
                this->vec.push_back(std::make_pair(atoi(av[i]), atoi(av[i + 1])));
        }
    }
}

void PMergeMe::sort()
{
    static int i = 0;
    
    if (this->vec[i].first > this->vec[i + 1].first)
    {
        int tmp = this->vec[i].first;
        this->vec[i].first = this->vec[i + 1].first;
        this->vec[i + 1].first = tmp;
    }
    // std::cout << "first : >>"<<this->vec[i].first << " second : " << this->vec[i+1].first << std::endl;
}

void PMergeMe::merge_sort(int ac, char** av)
{
    fill_container(ac, av);

    for (this->it = this->vec.begin(); this->it != this->vec.end(); ++this->it)
    {
        if (this->it->first > this->it->second)
        {
            int tmp = this->it->first;
            this->it->first = this->it->second;
            this->it->second = tmp;
        }
    }
    
    sort();
    for(this->it = this->vec.begin(); this->it != vec.end(); ++this->it)
    {
        std::cout << "first : "<<this->it->first << " second : " << this->it->second << std::endl;
    }
    
}

PMergeMe::~PMergeMe() { }