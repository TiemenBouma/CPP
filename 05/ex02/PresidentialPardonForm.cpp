#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
:AForm("PresidentialPardonForm", 25, 5), _target(target) {
	std::cout << this->getName() << ": Default constructor PresidentialPardonForm called " << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
:AForm("PresidentialPardonForm", 25, 5) {
	this->setIsSigned(other.getIsSigned());
	_target = other._target;
	std::cout << this->getName() << ": Copy contructor PresidentialPardonForm called" << std::endl;	
}

PresidentialPardonForm&	PresidentialPardonForm::operator=( const PresidentialPardonForm& other ) {
	this->setIsSigned(other.getIsSigned());
	_target = other._target;
	std::cout << "PresidentialPardonForm copy assignment called" << std::endl;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << this->getName() << ": Default PresidentialPardonForm destructor called" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > this->getReqExe())
		throw AForm::GradeTooLowException();
	std::cout << "Informs that " <<  _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

std::ostream& operator<<(std::ostream &os, const PresidentialPardonForm &other) {
	os << "PresidentialPardonForm name: " << other.getName() << ", Signed: " << other.getIsSigned() << " Required grade for Sign: " << other.getReqSign() << " Required grade for Exe: " << other.getReqExe();
	return os;
}
