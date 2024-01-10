/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:07:03 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/10 16:53:31 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iterator>

AForm::AForm() : Name(""), Etat(false), Grade_sign(0), Grade_exec(0) { }

AForm::AForm(const std::string name, const int sign, const int exec,const std::string target) : 
    Name(name), Grade_sign(sign), Grade_exec(exec), Target(target)
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

std::string AForm::getTarget() const
{
    return this->Target;
}

bool AForm::beSigned(Bureaucrat &b)
{
    if (b.getGrade() > this->Grade_sign)
        throw AForm::GradeTooLowException();
    this->Etat = true;
    std::cout << "be sign : " <<this->Etat << std::endl;
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