/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 19:32:46 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/09 21:25:39 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <exception>

int main()
{

    Bureaucrat b("hicham", 46);
    
    // PresidentialPardonForm presid("name1");

    RobotomyRequestForm robot("name2");
    

    try {
        
        robot.beSigned(b);
        robot.execute(b);
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
    // try {
        
    //     presid.beSigned(b);
    //     presid.execute(b);
    // }
    // catch (std::exception& e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    
    return 0;
}