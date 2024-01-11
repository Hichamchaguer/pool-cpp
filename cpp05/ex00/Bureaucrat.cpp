/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 19:34:33 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/11 18:53:30 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <exception>

Bureaucrat::Bureaucrat()
{
    std::cout << "bureaucrat default constractor" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : Name(name), Grade(grade) { }

Bureaucrat::Bureaucrat(Bureaucrat const &bureaucrat)
{
    std::cout << "bureacrat copy constractor" << std::endl;
    *this = bureaucrat;
}

const std::string Bureaucrat::getName() const
{
    return this->Name;
}

int Bureaucrat::getGrade() const
{
    return this->Grade;
}

void Bureaucrat::incrementing_grade()
{
    try {
        if (this->Grade >= 1)
            this->Grade--;
        if (this->Grade < 1) {
        
            throw Bureaucrat::GradeTooHighException();
        }
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}

void Bureaucrat::decrementing_grade()
{
    try {
        if (this->Grade <= 150)
            this->Grade++;
        if (this->Grade > 150) {
        
        throw Bureaucrat::GradeTooLowException();
    }
    } catch (std::exception& e) {

        std::cout << e.what() << std::endl;
    }
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &Bureaucrat)
{
    this->Grade = Bureaucrat.getGrade();
    return *this;
}

Bureaucrat::~Bureaucrat() {

    std::cout << "Bureacrat destractor called " << std::endl;   
}

std::ostream& operator<<(std::ostream &o, Bureaucrat const &b)
{
    
    o << b.getName() << " bureaucrat grade " << b.getGrade();
    return o;
}