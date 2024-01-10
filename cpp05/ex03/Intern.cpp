/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:50:57 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/10 16:51:22 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


Intern::Intern()
{
    std::cout << "intern default constractor called" << std::endl;
}

Intern::Intern(Intern const &i) : AForm(i)
{
    std::cout << "intern copy constractor called " << std::endl;
    *this = i;
}

Intern& Intern::operator=(Intern const &i)
{
    (void)i;
    return (*this);
}

Intern::~Intern()
{
    std::cout << "intern destractor called " << std::endl;
}

bool Intern::execute(Bureaucrat const & executor) const
{
    (void)executor;
    return false;
}

AForm* Intern::makeForm(const std::string formName, const std::string target)
{   
    
    AForm *f;
    int i = 0;
    const std::string tab[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};

    for(i = 0; i < 3; i++)
    {
        if (formName == tab[i])
            break;
    }
    switch(i)
    {
        case 0 :
            std::cout << "Intern create " << formName << std::endl;
            f = new PresidentialPardonForm(target);
            return (f);
            break;
        case 1 :
            std::cout << "Intern create " << formName << std::endl;
            f = new RobotomyRequestForm(target);
            return (f);
            break;
        case 2 :
            std::cout << "Intern create " << formName << std::endl;
            f = new ShrubberyCreationForm(target);
            return (f);
            break;
        default:
            std::cout << ">>>>> Error : "<< formName <<" Form not found " << std::endl;
    }
    
    return (NULL);
}