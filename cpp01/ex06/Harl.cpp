/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:55:28 by hchaguer          #+#    #+#             */
/*   Updated: 2023/10/30 13:50:48 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() { }

Harl::~Harl() { }

void Harl::debug() {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<< std::endl;
}
void Harl::info() {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!" << std::endl;
}
void Harl::warning() {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error() {
    std::cout << "[ ERROR ]" << std::endl;
     std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
void   Harl::complain(std::string level) {

    void (Harl::*complain[4])(void) = {&Harl::debug, &Harl::warning, &Harl::info, &Harl::error};
    std::string tab[4] = {"debug", "warning", "info", "error"};

    for (int i = 0; i < 4; i++) {

        if (level == tab[i]){
        int j = i;
            for (j = i; j < 4; j++)
            {
                (this->*complain[j])();
            }
            return ;
        }
    } 
    std::cout << "invalid arg" << std::endl;
}