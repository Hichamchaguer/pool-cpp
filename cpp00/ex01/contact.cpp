/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:51:15 by hchaguer          #+#    #+#             */
/*   Updated: 2023/10/20 00:22:40 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact() : num_phone(""), fisrtName(""), 
    lastName(""), nickName(""), darkest_secret("") { }

std::string Contact::get_num() { return num_phone; }
void Contact::setNumPhone(std::string number) { num_phone = number; }

std::string Contact::get_fname() {return (this->fisrtName); }
void Contact::set_fname(std::string first) { fisrtName = first; }

std::string Contact::get_lname() {return (this->lastName); }
void Contact::set_lname(std::string last) { lastName = last; }

std::string Contact::get_nickNmae() {return (this->nickName); }
void Contact::set_nickname(std::string nick) { nickName = nick; }

std::string Contact::get_dark() {return (this->darkest_secret); }
void Contact::set_dark(std::string dark) {darkest_secret = dark; }


void Contact::display()
{
    std::cout << "first name : " << get_fname() << std::endl;
    std::cout << "last name : " << get_lname() << std::endl;
    std::cout << "nick name : " << get_nickNmae() << std::endl;
    std::cout << "number : " << get_num() << std::endl;
    std::cout << "dark secret : " << get_nickNmae() << std::endl;
}
