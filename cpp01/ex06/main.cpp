/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:55:40 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/08 02:00:37 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
int main(int ac, char **av)
{
    if (ac == 1 || ac > 2)
        return 1;
    
    Harl h;
    
    h.complain(av[1]);
    return 0;
}