/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:49:04 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/10 16:49:52 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP


#include <iostream>
#include "Form.hpp"


class Intern : public AForm {

    public :
        Intern();
        Intern(Intern const &i);
        Intern& operator=(Intern const &i);
        ~Intern();

        AForm *makeForm(const std::string formName, const std::string target);
        bool execute(Bureaucrat const & executor) const;
};


#endif