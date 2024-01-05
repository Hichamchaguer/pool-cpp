/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:07:18 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/05 16:32:19 by hchaguer         ###   ########.fr       */
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
  Form(Form const &f);
  Form& operator=(Form const &f);
  ~Form();


  const std::string getName() const ;
  bool getEtat() const ;
  int getGrade_sign() const;
  int getGrade_exec() const;
  void beSigned(Bureaucrat &b);
  
  class GradeTooHighException : public std::exception
  {
    public:
      virtual const char* what() const throw() 
      {
        return "Error : Grade too High";
      }
  };
  

  class GradeTooLowException : public std::exception {

      public :
      virtual const char* what() const throw() {

          return "Error : Grade too low";
      }
        
  };
};

std::ostream& operator<<(std::ostream &o, Form const &f);


#endif