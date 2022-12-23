#include "Form.hpp"

Form::Form()
: _name("Unnamed_Form"), _is_signed(0), _req_grade_sign(150), _req_grade_exe(150) {
	std::cout << _name << ": Default constructor Form called " << std::endl;
}

Form::Form(const Form& other)
: _name(other._name), _is_signed(other._is_signed), _req_grade_sign(other._req_grade_sign), _req_grade_exe(other._req_grade_exe) {
	std::cout << _name << ": Copy contructor Form called" << std::endl;	
}

Form::Form(const std::string& name, const size_t req_grade_sign, const size_t req_grade_exe)
: _name(name), _is_signed(0), _req_grade_sign(req_grade_sign), _req_grade_exe(req_grade_exe) {
	if (_req_grade_exe < 1 || _req_grade_sign < 1)
		throw (GradeTooHighException());
	if (_req_grade_exe > 150 || _req_grade_sign > 150)
		throw (GradeTooLowException());
	std::cout << _name << ": Form name/grades constructor called " << std::endl;
}

Form&	Form::operator=( const Form& other ) {
	_is_signed = other._is_signed;
	std::cout << "Form copy assignment called" << std::endl;
	return (*this);
}

Form::~Form() {
	std::cout << _name << ": Default From destructor called" << std::endl;
}

std::string	Form::getName() const {return(this->_name);}
size_t	Form::getIsSigned() const {return(this->_is_signed);}
size_t	Form::getReqSign() const {return(this->_req_grade_sign);}
size_t	Form::getReqExe() const {return(this->_req_grade_exe);}

void Form::beSigned(Bureaucrat& crat) {
	if (crat.getGrade() > _req_grade_sign)
		throw GradeTooLowException();
	// if (_is_signed == 1)
	// 	throw FormSignedException();
	_is_signed = 1;
	std::cout << "Form is now signed!" << std::endl;
}

Form::GradeTooHighException::GradeTooHighException() {
	std::cout << "Grade to high exception" << std::endl;
}

Form::GradeTooLowException::GradeTooLowException() 
{
	std::cout << "Grade to low exception" << std::endl;
}

// Form::FormSignedException::FormSignedException() 
// {
// 	std::cout << "Already signed exception" << std::endl;
// }

std::ostream& operator<<(std::ostream &os, const Form &other) {
	os << "Form name: " << other.getName() << ", Signed: " << other.getIsSigned() << " Required grade for Sign: " << other.getReqSign() << " Required grade for Exe: " << other.getReqExe();
	return os;
}