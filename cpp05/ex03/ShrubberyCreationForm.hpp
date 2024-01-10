/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:50:45 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/10 16:52:21 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREACTIONFORM_HPP
#define SHRUBBERYCREACTIONFORM_HPP

#include <iostream>
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {

    public :
    ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string &target);
    ShrubberyCreationForm(const ShrubberyCreationForm& s);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& s);
    ~ShrubberyCreationForm();

    bool execute(Bureaucrat const & executor) const;
};


#endif