/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 19:32:46 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/12 22:51:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <exception>

int main()
{
    Bureaucrat b("hicham", 150);

    try 
    {
        b.decrementing_grade();
        if (b.getGrade() >= 1 && b.getGrade() <= 150)
        {
            std::cout << b << std::endl;
        }
        else if (b.getGrade() < 1)
            throw Bureaucrat::GradeTooHighException();
        else if (b.getGrade() > 150)
            throw Bureaucrat::GradeTooLowException();
    } 
    catch (std::exception& e) 
    {
        std::cout <<e.what() << std::endl;
    }
    
    return 0;
}