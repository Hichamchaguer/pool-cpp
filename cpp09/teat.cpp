/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teat.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:05:07 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/14 17:13:01 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <deque>
#include <set>
#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include <vector>
#include <stack>
#include <utility>

using namespace std;

int main()
{
    vector<int> v1; 
    int i; 
  
    for (i = 0; i < 3; ++i) { 
        v1.push_back(i); 
    } 
    // v1 contains 0 1 2 3 4 5 6 7 8 9 
  
    vector<int>::iterator i1, i2; 
  
    i1 = v1.begin(); 
    i2 = v1.end() - 1; 
  
    // Performing swap between first and last element 
    // of vector 
    std::iter_swap(i1, i2); 
  
    // Displaying v1 after swapping 
    for (i = 0; i < 3; ++i) { 
        cout << v1[i] << " "; 
    } 


     // int i = 0, j = 0, k = start;
    // while (i < left_size && j < right_size) {
    //         if (left[i].first <= right[j].first) {
    //             vec[k] = left[i];
    //             ++i;
    //         } else {
    //             vec[k] = right[j];
    //             ++j;
    //         }
    //         ++k;
    //     }

    //     while (i < left_size) {
    //         vec[k] = left[i];
    //         ++i;
    //         ++k;
    //     }

    //     while (j < right_size) {
    //         vec[k] = right[j];
    //         ++j;
    //         ++k;
    //     }
}