/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:50:34 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/09 15:48:41 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTtFORM_HPP
#define ROBOTOMYREQUESTtFORM_HPP

#include <iostream>
#include "Form.hpp"


class RobotomyRequestForm : public AForm
{
    RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm& r);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& r);
    ~RobotomyRequestForm();
};

#endif