/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 04:01:31 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/17 01:44:10 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <cstddef>
#include <iostream>
#include <utility>
#include <vector>
#include <deque>
#include <algorithm>
#include <cstdlib>
#include <ctime> 

class PMergeMe {

    private:
    
        std::vector<std::pair<int, int> > vec;
        std::deque<std::pair<int, int> > dec;
        int last;
    
    public :
        
        PMergeMe();
        PMergeMe(const PMergeMe &m);
        PMergeMe& operator=(const PMergeMe &m);
        ~PMergeMe();

        void fill_container(int ac, char **av);
        void merge_sort(int, char**);
        void sort(size_t);
        void sort_fist_second();
        void fill_vec(std::vector<int>&,int);
        void swap_pairs();
        
        void merge_sort_dec(int ac, char** av);
        void fill_decque(int ac, char **av);
        void sort_dec(size_t size);
        void sort_fist_second_dec();
        void fill_dec(std::deque<int>& v,int ac);
        void swap_pairs_dec();
};

#endif