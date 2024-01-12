/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:07:03 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/12 23:26:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iterator>


Form::Form() : Name(""), Etat(false), Grade_sign(0), Grade_exec(0)
{
    std::cout << "Form default constractor called" << std::endl;
}

Form::Form(const std::string name, const int sign, const int exec) : 
    Name(name), Grade_sign(sign), Grade_exec(exec)
{
    std::cout << "Form constractor called " << std::endl;
    if (sign < 1 || exec < 1)
        throw Form::GradeTooHighException();
    else if (sign > 150 || exec > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form const &f) : Name(f.Name), Etat(false), Grade_sign(f.Grade_sign), Grade_exec(f.Grade_exec)
{
    *this = f;
    if (this->Grade_sign < 1 || this->Grade_exec < 1)
        throw Form::GradeTooHighException();
    else if (this->Grade_sign > 150 || this->Grade_exec > 150)
        throw Form::GradeTooLowException();
}

Form& Form::operator=(Form const &f)
{
    this->Etat = f.Etat;
    return *this;
}

const std::string Form::getName() const
{
    return this->Name;
}

bool Form::getEtat() const
{
    return this->Etat;
}

int Form::getGrade_sign() const
{
    return this->Grade_sign;
}

int Form::getGrade_exec() const
{
    return this->Grade_exec;
}

bool Form::beSigned(Bureaucrat &b)
{
    if (b.getGrade() > this->Grade_sign)
        throw Form::GradeTooLowException();
    this->Etat = true;
    return (this->Etat);
}

std::ostream& operator<<(std::ostream &o, Form const &f)
{
    o << "Form : " << f.getName() << "\n" << "grade sign : " << f.getGrade_sign() << "\n" <<
    "grade execute : " << f.getGrade_exec() <<std::endl;
    return o;
}

Form::~Form() 
{ 
    std::cout << "Form destractor called" << std::endl;
}