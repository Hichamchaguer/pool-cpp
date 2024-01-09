
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("", 145, 173, "")
{
    std::cout << "ShrubberyCreationForm default constractor called " << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 173, target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& s) : Aform(s)
{
    std::cout << "ShrubberyCreationForm copy constractor called " << std::endl;
    *this = s;
}


ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& s) 
{
    std::cout << "ShrubberyCreationForm operator overloaded called " << std::endl;
    this->Etat = s.Etat;
    this->Target = s.Target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destractor called " << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    // std::ofstream o;
    return ;
}