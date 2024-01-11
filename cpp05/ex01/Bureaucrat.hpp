/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 19:33:28 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/11 18:50:36 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <iostream>
#include <exception>
#include <ostream>

class Form;

class Bureaucrat {

    private:
    
        const std::string Name;
        int Grade;
    
    public :
        Bureaucrat();
        Bureaucrat(Bureaucrat const &Bureaucrat);
        Bureaucrat& operator=(Bureaucrat const &Bureaucrat);
        ~Bureaucrat();


    Bureaucrat(const std::string name, int grade);
    const std::string getName() const ;
    int getGrade() const;
    void incrementing_grade();
    void decrementing_grade();
    void signForm( Form &f);
    
    class GradeTooHighException : public std::exception {

        public :
        const char* what() const throw() {

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

std::ostream& operator<<(std::ostream &o, Bureaucrat const &b);
#endif