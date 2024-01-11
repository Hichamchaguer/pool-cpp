/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 19:32:46 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/11 19:13:53 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <exception>
#include "Intern.hpp"

int main()
{    
    Intern someRandomIntern;
    AForm* rrf;
    
    rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
    
    return 0;
}