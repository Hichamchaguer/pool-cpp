/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 19:33:28 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/11 18:50:54 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <iostream>
#include <exception>
#include <ostream>

class AForm;

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
    void signForm(AForm &f);
    void executeForm(AForm const & form);
    
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