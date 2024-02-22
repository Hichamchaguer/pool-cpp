/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 19:34:33 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/12 22:53:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <exception>

Bureaucrat::Bureaucrat()
{
    std::cout << "bureaucrat default constractor" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : Name(name), Grade(grade) 
{ 
    std::cout << "bureaucrat parametric constractor " << name <<std::endl;
}

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
    if (this->Grade >= 1)
        this->Grade--;
    if (this->Grade < 1) {
        
        throw Bureaucrat::GradeTooHighException();
    }
}

void Bureaucrat::decrementing_grade()
{
    if (this->Grade <= 150)
        this->Grade++;
    if (this->Grade > 150) {
        
        throw Bureaucrat::GradeTooLowException();
    }
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &Bureaucrat)
{
    this->Grade = Bureaucrat.getGrade();
    return *this;
}

Bureaucrat::~Bureaucrat() {

    std::cout << "Bureacrat destractor called " << this->Name <<std::endl;   
}

std::ostream& operator<<(std::ostream &o, Bureaucrat const &b)
{
    
    o << b.getName() << " bureaucrat grade " << b.getGrade();
    return o;
}
