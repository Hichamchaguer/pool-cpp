/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:47:56 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/09 21:18:54 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 72, 5, "")
{
    std::cout << "PresidentialPardon default constructor called " << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 72, 5, target)
{
    std::cout << "PresidentialPardon parametric constructor called " << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &p)
{
    std::cout << "PresidentialPardon copy constructor called " << std::endl;
    *this = p;
}

// PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& p)
// {
    
// }

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardon destructor called " << std::endl;
}

bool PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
     try 
    {
        if (AForm::execute(executor) == true)
        {
            std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox " << std::endl;
        }
        else 
        {
            throw PresidentialPardonForm::PardonCheckException();
        }
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
        return false;
    }
    return true;
}