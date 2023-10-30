/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 11:55:52 by hchaguer          #+#    #+#             */
/*   Updated: 2023/10/29 03:08:17 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


Harl::Harl() { }
void Harl::debug() {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<< std::endl;
}
void Harl::info() {
    std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!" << std::endl;
}
void Harl::warning() {
    std::cout << "I think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error() {
     std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
void   Harl::complain(std::string level) {

    void (Harl::*complain[4])(void) = {&Harl::debug, &Harl::warning, &Harl::error, &Harl::info};
    std::string tab[4] = {"debug", "info", "warning", "error"};

    for (int i = 0; i < 4; i++) {

        if (level == tab[i]){

            (this->*complain[i])();
            return ;
        }
    } 
    std::cout << "invalid arg" << std::endl;
}