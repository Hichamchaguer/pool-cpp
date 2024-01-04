/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 19:32:46 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/04 21:51:55 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <exception>

int main()
{
    Bureaucrat b("hicham", 149);

    try 
    {
        if (b.getGrade() >= 1 && b.getGrade() <= 150)
            std::cout << b << std::endl;
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