/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 04:02:16 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/15 21:52:46 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <algorithm>
#include <cctype>
#include <cstddef>
#include <ctime>
#include <functional>
#include <iostream>
#include <ostream>
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
    this->last = m.last;
    return (*this);
}

bool check_len(int len)
{
    if ((len - 1) % 2 == 0)
        return true;
    return false;
}

bool is_digits(char* str)
{
    int i = 0;
    while (str[i])
    {
        if (!isdigit(str[i]))
            return false;
        i++;
    }
    return true;
}

void    check_args(int ac, char** av)
{
    int i = 1;
    while(i < ac)
    {
        if (is_digits(av[i]) == false)
            throw std::invalid_argument("Invalid argument");
        i++;
    }
}

void PMergeMe::fill_container(int ac, char **av)
{
    this->last = 0;
    
    check_args(ac, av);
    std::cout << "Before: ";
    for (int i = 1; i < ac; i++)
        std::cout << av[i] << " ";    
    std::cout << std::endl;
    
    if (check_len(ac) == true)
    {
        for (int i = 1; i < ac; i+=2)
            this->vec.push_back(std::make_pair(atoi(av[i]), atoi(av[i + 1])));
    }
    if (check_len(ac) == false)
    {
        for (int i = 1; i < ac; i+=2)
        {
            if (av[i] && av[i + 1] == NULL)
                this->last = atoi(av[i]);
            else
                this->vec.push_back(std::make_pair(atoi(av[i]), atoi(av[i + 1])));
        }
    }
}

void PMergeMe::sort(size_t size)
{
    if (size == 0)
        return;

    for (size_t i = 0; i < (size - 1); i++)
    {
        if (this->vec[i].first > this->vec[i + 1].first)
            std::swap(this->vec[i].first, this->vec[i+1].first);
    }
    sort(size - 1);
}

void PMergeMe::sort_fist_second()
{
    std::vector<std::pair<int, int> >::iterator it;
    
    for (it = this->vec.begin(); it != this->vec.end(); ++it)
    {
        if (it->first < it->second)
            std::swap(it->first, it->second);
    }
    sort(this->vec.size());
}


void PMergeMe::fill_vec(std::vector<int>& v,int ac)
{
    std::vector<std::pair<int, int> >::iterator it;
    
    for (it = this->vec.begin(); it != this->vec.end(); ++it)
        v.push_back(it->first);
    
    if (check_len(ac) == false)
    {
        std::vector<int>::iterator it1;
        it1 = std::lower_bound(v.begin(), v.end(), this->last);
        v.insert(it1, this->last);
    }
    for (size_t i = 0; i < this->vec.size(); i++)
    {
        std::vector<int>::iterator it;
            
        it = std::lower_bound(v.begin(), v.end(), this->vec[i].second);
        v.insert(it, this->vec[i].second);
    }
}

void PMergeMe::swap_pairs()
{
    std::vector<std::pair<int, int> >::iterator it;
    for (it = this->vec.begin(); it != this->vec.end(); ++it)
    {
        if (it->first < it->second)
        {
            int tmp = it->first;
            it->first = it->second;
            it->second = tmp; 
        }
    }
}

void PMergeMe::merge_sort_dec(int ac, char** av)
{
    std::deque<int>  d;
    clock_t time;

    fill_decque(ac, av);
    time = clock();
    swap_pairs_dec();
    sort_dec(this->dec.size());
    sort_fist_second_dec();
    fill_dec(d, ac);
    time = clock() - time;

    std::cout << "Time to process a range of " << d.size() << " elements with std::deque : " << time << " us" <<std::endl;  
}

void PMergeMe::fill_decque(int ac, char **av)
{
    this->last = 0;
    
    if (check_len(ac) == true)
    {
        for (int i = 1; i < ac; i+=2)
            this->dec.push_back(std::make_pair(atoi(av[i]), atoi(av[i + 1])));
    }
    if (check_len(ac) == false)
    {
        for (int i = 1; i < ac; i+=2)
        {
            if (av[i] && av[i + 1] == NULL)
                this->last = atoi(av[i]);
            else
                this->dec.push_back(std::make_pair(atoi(av[i]), atoi(av[i + 1])));
        }
    }
}

void PMergeMe::sort_dec(size_t size)
{
    if (size == 0)
        return;

    for (size_t i = 0; i < (size - 1); i++)
    {
        if (this->dec[i].first > this->dec[i + 1].first)
            std::swap(this->dec[i].first, this->dec[i+1].first);
    }
    sort_dec(size - 1);
}

void PMergeMe::sort_fist_second_dec()
{
    std::deque<std::pair<int, int> >::iterator it;
    
    for (it = this->dec.begin(); it != this->dec.end(); ++it)
    {
        if (it->first < it->second)
            std::swap(it->first, it->second);
    }
    sort_dec(this->dec.size());
}


void PMergeMe::fill_dec(std::deque<int>& v,int ac)
{
    std::vector<std::pair<int, int> >::iterator it;
    
    for (it = this->vec.begin(); it != this->vec.end(); ++it)
        v.push_back(it->first);
    
    if (check_len(ac) == false)
    {
        std::deque<int>::iterator it1;
        it1 = std::lower_bound(v.begin(), v.end(), this->last);
        v.insert(it1, this->last);
    }
    for (size_t i = 0; i < this->vec.size(); i++)
    {
        std::deque<int>::iterator it;
            
        it = std::lower_bound(v.begin(), v.end(), this->vec[i].second);
        v.insert(it, this->vec[i].second);
    }
}

void PMergeMe::swap_pairs_dec()
{
    std::deque<std::pair<int, int> >::iterator it;

    for (it = this->dec.begin(); it != this->dec.end(); ++it)
    {
        if (it->first < it->second)
        {
            int tmp = it->first;
            it->first = it->second;
            it->second = tmp;
        }
    }
}

void PMergeMe::merge_sort(int ac, char** av)
{
    std::vector<int> v;
    std::vector<int>::iterator it;
    clock_t time;
    
    fill_container(ac, av);
    time = clock();
    swap_pairs();
    sort(this->vec.size());
    sort_fist_second();
    fill_vec(v, ac);
    time = clock() - time;
    
    std::cout << "after: ";
    for (it = v.begin(); it != v.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    std::cout << "Time to process a range of " << v.size() << " elements with std::vector : " << time << " us"<<std::endl;
    merge_sort_dec(ac, av);
}

PMergeMe::~PMergeMe() { }