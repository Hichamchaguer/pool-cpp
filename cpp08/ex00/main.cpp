/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 20:46:34 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/05 15:08:27 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int main() {

  try {
    
    std::array<int, 15> a = {1,2,3,4,5,6,7,8,9,10,11,12,13,15,14};
    easyfind(a, 10); 
    
  }
  catch(std::exception &e)
  {
    std::cout << "Error : " << e.what() << std::endl; 
  }
  
  
  return 0;
}