#include "RobotomyRequestForm.hpp"

#include "AForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string target)
:AForm("RobotomyRequestForm", 145, 137), _target(target) {
	std::cout << this->getName() << ": Default constructor RobotomyRequestForm called " << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
:AForm("RobotomyRequestForm", 145, 137), _target(other._target) {
	this->setIsSigned(other.getIsSigned());
	std::cout << this->getName() << ": Copy contructor RobotomyRequestForm called" << std::endl;	
}

RobotomyRequestForm&	RobotomyRequestForm::operator=( const RobotomyRequestForm& other ) {
	this->setIsSigned(other.getIsSigned());
	_target = other._target;
	std::cout << "RobotomyRequestForm copy assignment called" << std::endl;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << this->getName() << ": Default RobotomyRequestForm destructor called" << std::endl;
}

// void RobotomyRequestForm::beSigned(Bureaucrat& crat) {
// 	if (crat.getGrade() > this->getReqSign())
// 		throw AForm::GradeTooLowException();
// 	this->setIsSigned(1);
// 	std::cout << "RobotomyRequestForm is now signed!" << std::endl;
// }

void	RobotomyRequestForm::execute(Bureaucrat const & executor) {
	if (executor.getGrade() > this->getReqExe())
		throw AForm::GradeTooLowException();
	std::cout << "DRRRRRRIIIIILLLLLLL" << std::endl;
	srand(time(0));
	int i = rand() % 2;
	if (i == 0)
		std::cout << _target << " has been robotomized." << std::endl;
	if (i == 1)
		std::cout << "Robotomy faild." << std::endl;
}

std::ostream& operator<<(std::ostream &os, const RobotomyRequestForm &other) {
	os << "RobotomyRequestForm name: " << other.getName() << ", Signed: " << other.getIsSigned() << " Required grade for Sign: " << other.getReqSign() << " Required grade for Exe: " << other.getReqExe();
	return os;
}
