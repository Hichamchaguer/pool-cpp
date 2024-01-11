/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 19:34:33 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/10 22:07:08 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>

Bureaucrat::Bureaucrat()
{
    std::cout << "bureaucrat default constractor" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : Name(name), Grade(grade) { 
    std::cout << "bureaucrat parametric constractor" << std::endl;
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
    try {
        if (this->Grade >= 1)
            this->Grade--;
        if (this->Grade < 1) {
        
            throw Bureaucrat::GradeTooHighException();
        }
    }
    catch (std::exception& e)
    {
        std::cout <<e.what() << std::endl;
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

void Bureaucrat::signForm(AForm &f) {

    try {
        
        f.beSigned(*this);
        std::cout << this->Name << " signed " << f.getName() << std::endl;
        
    }
    catch (std::exception& e) {
        
        std::cout << this->Name << " couldn't sign " << f.getName() << " because "
        << " grade of bureaucrat " << this->Name << " too low " << std::endl;
    }
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &Bureaucrat)
{
    this->Grade = Bureaucrat.getGrade();
    return *this;
}

Bureaucrat::~Bureaucrat() {
    
    std::cout << "bureacrate destractor called " << std::endl;
}

void Bureaucrat::executeForm(AForm const &form)
{
   try {
    
        if (form.execute(*this) == true)
        {
            std::cout << this->Name << " executed " << form.getName() << std::endl;
        }
        else 
        {
            throw AForm::signStateException();
        }
   } 
   catch (std::exception &e) {
   
        std::cout << e.what() << std::endl;
   }
}

std::ostream& operator<<(std::ostream &o, Bureaucrat const &b)
{
    o << b.getName() << " bureaucrat grade " << b.getGrade();
    return o;
}