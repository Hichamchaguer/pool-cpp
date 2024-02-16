/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 20:46:34 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/15 12:18:57 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int main() {

  try {
    
    std::deque<int> vec;
    vec.push_back(1);
    vec.push_back(10);
    vec.push_back(14);
    vec.push_back(20);
    vec.push_back(17);
  
    easyfind(vec, 11); 
    
  }
  catch(std::exception &e)
  {
    std::cout << "Error : " << e.what() << std::endl;
  }
  
  
  return 0;
}