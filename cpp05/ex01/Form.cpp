/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:07:03 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/05 16:32:37 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iterator>


Form::Form() : Name(""), Etat(false), Grade_sign(0), Grade_exec(0)
{
    
}

Form::Form(Form const &f) : Name(""), Etat(false), Grade_sign(0), Grade_exec(0)
{
    *this = f;
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


std::ostream& operator<<(std::ostream &o, Form const &f)
{
    o << "Name : " << f.getName() << "grade sign : " << f.getGrade_sign() <<  
    "grade execute : " << f.getGrade_sign() << std::endl;
    return o;
}

Form::~Form() { }