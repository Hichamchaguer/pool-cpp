/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:50:34 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/11 18:51:17 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTtFORM_HPP
#define ROBOTOMYREQUESTtFORM_HPP

#include <exception>
#include <iostream>
#include "Form.hpp"


class RobotomyRequestForm : public AForm
{
    public :
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm& r);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& r);
        ~RobotomyRequestForm();
    
        RobotomyRequestForm(const std::string &target);
        virtual bool execute(Bureaucrat const & executor) const;
    
    
        class RobotomizedCheckException : std::exception
        {
          public :
          
            const char *what() const throw()
            {
              return ("Error : robotomy failed ");
            }
        };  
};

#endif