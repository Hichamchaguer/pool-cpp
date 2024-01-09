/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:07:18 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/09 01:02:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>
#include <ostream>
#include <string>


class AForm {

private:

const std::string Name;
bool Etat;
const int Grade_sign;
const int Grade_exec;
std::string Target; 

public:
  
  AForm();
  AForm(const std::string name, const int sign, const int exec);
  AForm(AForm const &f);
  AForm& operator=(AForm const &f);
  virtual ~AForm();


  const std::string getName() const;
  bool getEtat() const;
  int getGrade_sign() const;
  int getGrade_exec() const;
  bool beSigned(Bureaucrat &b);
  std::string getTarget() const;
  virtual bool execute(Bureaucrat const & executor) const = 0;
  
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

  class signStateException : public std::exception {

      public :
        virtual const char* what() const throw()
        {
          return "Error : form is not sign";
        }
  };
};

std::ostream& operator<<(std::ostream &o, AForm const &f);


#endif