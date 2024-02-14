/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 04:01:31 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/14 05:41:32 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <cstdlib>


class PMergeMe {

    private:
    
        std::vector<std::pair<int, int> > vec;
        std::vector<std::pair<int, int> >::iterator it;
        int last;
    
    public :
        
        PMergeMe();
        PMergeMe(const PMergeMe &m);
        PMergeMe& operator=(const PMergeMe &m);
        ~PMergeMe();

        void fill_container(int ac, char **av);
        void merge_sort(int, char**);
        void sort();
};

#endif