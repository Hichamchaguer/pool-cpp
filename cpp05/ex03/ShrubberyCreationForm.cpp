/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:50:37 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/09 14:50:37 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <exception>
#include <fstream>
#include <iostream>
#include <ostream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("", 145, 173, "")
{
    std::cout << "ShrubberyCreationForm default constractor called " << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 173, target)
{
    std::cout << "Shrubbery parametric constractor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& s) : AForm(s)
{
    std::cout << "ShrubberyCreationForm copy constractor called " << std::endl;
    *this = s;
}


ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& s) 
{
    std::cout << "ShrubberyCreationForm operator overloaded called " << std::endl;
    // this->Etat = s.Etat;
    (void)s;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destractor called " << std::endl;
}

bool ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    std::ofstream filename;
    std::cout << "etat : " << getEtat() << std::endl;

    try {

        if (AForm::execute(executor) == true)
        {
            filename.open((getTarget() + "_shrubbery").c_str());
            if (!filename.is_open())
                std::cerr << "failed to open this file" << std::endl;
            filename <<   "            *                         *                         *             " << std::endl;
            filename <<   "           ***                       ***                       ***            "  << std::endl;
            filename <<   "          *****                     *****                     *****           "    << std::endl;
            filename <<   "         *******                   *******                   *******          "  << std::endl;
            filename <<   "        *********                 *********                 *********         "  << std::endl;
            filename <<   "       ***********               ***********               ***********        "  << std::endl;
            filename <<   "      *************             *************             *************       "  << std::endl;
            filename <<   "     ***************           ***************           ***************      " <<  std::endl;
            filename <<   "    *****************         *****************         *****************     "  << std::endl;
            filename <<   "   *******************       *******************       *******************    "   << std::endl;
            filename <<   "  *********************     *********************     *********************   "   << std::endl;
            filename <<   " ***********************   ***********************   ***********************  "   << std::endl;
            filename <<   "************************* ************************* ************************* "    << std::endl;
            filename <<   "           **                        **                        **             "    << std::endl;
            filename <<   "           **                        **                        **             "    << std::endl;
            filename <<   "           **                        **                        **             "    << std::endl;
            filename <<   "           **                        **                        **             "    << std::endl;
            filename <<   "           **                        **                        **             "    << std::endl;
            filename <<   "           **                        **                        **             "    << std::endl;
            filename.close();
        }
        else {
            throw AForm::signStateException();
        }
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
        return false;
    }
    return true;
}