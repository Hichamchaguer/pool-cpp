/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:07:18 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/11 19:04:41 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>
#include <ostream>
#include <string>


class Form {

private:

const std::string Name;
bool Etat;
const int Grade_sign;
const int Grade_exec;

public:
  Form();
  Form(const std::string name, const int sign, const int exec);
  Form(Form const &f);
  Form& operator=(Form const &f);
  ~Form();


  const std::string getName() const;
  bool getEtat() const;
  int getGrade_sign() const;
  int getGrade_exec() const;
  bool beSigned(Bureaucrat &b);
  
  class GradeTooHighException : public std::exception
  {
    public:
      const char* what() const throw()
      {
        return "Error : Grade too High";
      }
  };
  

  class GradeTooLowException : public std::exception {

      public :
      const char* what() const throw() {

          return "Error : Grade too low";
      }
  };
};

std::ostream& operator<<(std::ostream &o, Form const &f);


#endif