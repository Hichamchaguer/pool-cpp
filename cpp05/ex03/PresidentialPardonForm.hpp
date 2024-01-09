/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:47:29 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/09 15:48:15 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class PresidentialPardonForm : public AForm
{
    PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &p);
    PresidentialPardonForm& operator=(const PresidentialPardonForm& p);
    ~PresidentialPardonForm();
};

#endif