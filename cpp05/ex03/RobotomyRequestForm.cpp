/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:49:09 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/10 16:51:57 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>


RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45, "")
{
    std::cout << "RobotomyRequest default constractor called " << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45, target)
{
    std::cout << "RobotomyRequest parametric constractor called " << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& r) : AForm(r)
{
    std::cout << "RobotomyRequest copy constractor called " << std::endl;
    *this = r;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& r)
{
    std::cout << "RobotomyRequest copy assignment called " << std::endl;
    (void)r;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destractor called " << std::endl;
}

bool RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    try 
    {
        std::cout << "exce : " << getEtat() << std::endl;
        if (AForm::execute(executor) == true)
        {
            std::cout << getTarget() << " has been robotomized successfully '50%' of the time" << std::endl;
        }
        else 
        {
            throw RobotomyRequestForm::RobotomizedCheckException();
        }
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
        return false;
    }
    return true;
}