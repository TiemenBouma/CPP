#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: AForm("ShrubberyCreationForm", 145, 137), _target(target) {
	std::cout << this->getName() << ": Default constructor ShrubberyCreationForm called " << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
:AForm("ShrubberyCreationForm", 145, 137), _target(other._target) {
	this->setIsSigned(other.getIsSigned());
	std::cout << this->getName() << ": Copy contructor ShrubberyCreationForm called" << std::endl;	
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=( const ShrubberyCreationForm& other ) {
	this->setIsSigned(other.getIsSigned());
	_target = other._target;
	std::cout << "ShrubberyCreationForm copy assignment called" << std::endl;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << this->getName() << ": Default ShrubberyCreationForm destructor called" << std::endl;
}

// void ShrubberyCreationForm::beSigned(Bureaucrat& crat) {
// 	if (crat.getGrade() > this->getReqSign())
// 		throw AForm::GradeTooLowException();
// 	this->setIsSigned(1);
// 	std::cout << "ShrubberyCreationForm is now signed!" << std::endl;
// }

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) {
	if (executor.getGrade() > this->getReqExe())
		throw AForm::GradeTooLowException();
	std::ofstream file(_target + "_shrubbery");

    // Write some text to the file
    file << "Bomen!\n";

	file << "               ,@@@@@@@," << std::endl;
	file << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
	file << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
	file << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
	file << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
	file << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
	file << "       |o|        | |         | |" << std::endl;
	file << "       |.|        | |         | |" << std::endl;
	file << "jgs \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
    // Close the file
    file.close();

}

std::ostream& operator<<(std::ostream &os, const ShrubberyCreationForm &other) {
	os << "ShrubberyCreationForm name: " << other.getName() << ", Signed: " << other.getIsSigned() << " Required grade for Sign: " << other.getReqSign() << " Required grade for Exe: " << other.getReqExe();
	return os;
}
