/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:07:03 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/08 19:51:12 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iterator>


AForm::AForm() : Name(""), Etat(false), Grade_sign(0), Grade_exec(0)
{
    
}

AForm::AForm(const std::string name, const int sign, const int exec) : 
    Name(name), Grade_sign(sign), Grade_exec(exec)
{
    
}

AForm::AForm(AForm const &f) : Name(""), Etat(false), Grade_sign(0), Grade_exec(0)
{
    *this = f;
}

AForm& AForm::operator=(AForm const &f)
{
    this->Etat = f.Etat;
    return *this;
}

const std::string AForm::getName() const
{
    return this->Name;
}

bool AForm::getEtat() const
{
    return this->Etat;
}

int AForm::getGrade_sign() const
{
    return this->Grade_sign;
}

int AForm::getGrade_exec() const
{
    return this->Grade_exec;
}

bool AForm::beSigned(Bureaucrat &b)
{
    if (b.getGrade() > this->Grade_sign)
        throw AForm::GradeTooLowException();
    this->Etat = true;
    return (this->Etat);
}

std::ostream& operator<<(std::ostream &o, AForm const &f)
{
    o << "AForm : " << f.getName() << "\n" << "grade sign : " << f.getGrade_sign() << "\n" <<
    "grade execute : " << f.getGrade_exec();
    return o;
}

AForm::~AForm() { }