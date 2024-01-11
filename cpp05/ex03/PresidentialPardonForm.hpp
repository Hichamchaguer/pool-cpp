/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:47:29 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/11 18:51:53 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <exception>
#include <iostream>
#include <string>
#include "Form.hpp"

class PresidentialPardonForm : public AForm
{
    public :
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &p);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& p);
        ~PresidentialPardonForm();

        PresidentialPardonForm(const std::string &target);
        virtual bool execute(Bureaucrat const & executor) const;

    class PardonCheckException : std::exception
    {
        const char* what() const throw() 
        {
            return ("has not been pardoned by Zaphod Beeblebrox");
        } 
    };
};

#endif