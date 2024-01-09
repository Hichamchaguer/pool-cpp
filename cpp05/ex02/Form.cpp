/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:07:03 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/09 01:02:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iterator>

AForm::AForm() : Name(""), Etat(false), Grade_sign(0), Grade_exec(0) { }

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
    this->Target = f.Target;
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

std::string AForm::getTarget() const
{
    return this->Target;
}

bool AForm::beSigned(Bureaucrat &b)
{
    if (b.getGrade() > this->Grade_sign)
        throw AForm::GradeTooLowException();
    this->Etat = true;
    return (this->Etat);
}

bool AForm::execute(Bureaucrat const &executor) const
{
    if (this->Etat == false)
        throw AForm::signStateException();
    else if (executor.getGrade() > this->Grade_exec)
        throw AForm::GradeTooLowException();
    return (this->Etat);
}

std::ostream& operator<<(std::ostream &o, AForm const &f)
{
    o << "AForm : " << f.getName() << "\n" << "grade sign : " << f.getGrade_sign() << "\n" <<
    "grade execute : " << f.getGrade_exec();
    return o;
}

AForm::~AForm() { }