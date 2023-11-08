/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:18:11 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/07 18:18:11 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main()
{
    int n = 3;
    Zombie *z = zombieHorde(n, "hicham");

    for (int i = 0; i < n; i++)
    {
        z[i].announce();
    }
    
    delete[] z;
    return 0;
}