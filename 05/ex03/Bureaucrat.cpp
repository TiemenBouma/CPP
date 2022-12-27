#include "Bureaucrat.hpp"
#include <string>


Bureaucrat::Bureaucrat( void )
: _name("X"), _grade(150) {
	std::cout << _name << ": Default constructor Bureaucrat with level " << _grade << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat& other )
: _name(other._name), _grade(other._grade) {
	std::cout << _name << ": Copy contructor Bureaucrat called with level " << _grade << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade)
: _name(name), _grade(grade) {
	if (_grade < 1)
		throw (GradeTooHighException());
	else if (_grade > 150)
		throw (GradeTooLowException());
	std::cout << _name << ": Bureaucrat name/grade constructor called with level " << _grade << std::endl;
}

Bureaucrat&	Bureaucrat::operator=( const Bureaucrat& other ) {
	_grade = other._grade;
	std::cout << "Bureaucrat copy assignment called" << std::endl;
	return (*this);
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << _name << ": Default Bureaucrat destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat &other) {
	os << other.getName() << ", bureaucrat grade " << other.getGrade();
	return os;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {
	std::cout << "Grade to high exception" << std::endl;
}

Bureaucrat::GradeTooLowException::GradeTooLowException() 
{
	std::cout << "Grade to low exception" << std::endl;
}


void	Bureaucrat::increment() {
	if (_grade <= 1)
		throw (GradeTooHighException());
	this->_grade--;
}

void	Bureaucrat::decrement() {
	if (_grade >= 150)
		throw (GradeTooLowException());
	this->_grade++;
}

void	Bureaucrat::signForm(AForm& form) {
	try 
	{
		form.beSigned(*this);
		std::cout << _name <<  " signed " << form.getName() << std::endl;

	}
	catch (const std::exception& exep) {
		std::cout << _name <<  " couldn’t sign " <<  form.getName() <<  " because required sign grade is to high." << std::endl;
	}
}

void	Bureaucrat::executeForm( AForm const &form ) {
	try
	{
		form.execute(*this);
		std::cout << getName() << " executed " << form.getName() << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cout << _name <<  " couldn’t execute " <<  form.getName() <<  " because required execute grade is to high." << std::endl;
	}
	
}

std::string	Bureaucrat::getName() const {return(this->_name);}
size_t	Bureaucrat::getGrade() const {return(this->_grade);}
