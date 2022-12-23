#include "AForm.hpp"

AForm::AForm()
: _name("Unnamed_AForm"), _is_signed(0), _req_grade_sign(150), _req_grade_exe(150) {
	std::cout << _name << ": Default constructor AForm called " << std::endl;
}

AForm::AForm(const AForm& other)
: _name(other._name), _is_signed(other._is_signed), _req_grade_sign(other._req_grade_sign), _req_grade_exe(other._req_grade_exe) {
	std::cout << _name << ": Copy contructor AForm called" << std::endl;	
}

AForm::AForm(const std::string& name, const size_t req_grade_sign, const size_t req_grade_exe)
: _name(name), _is_signed(0), _req_grade_sign(req_grade_sign), _req_grade_exe(req_grade_exe) {
	if (_req_grade_exe < 1 || _req_grade_sign < 1)
		throw (GradeTooHighException());
	if (_req_grade_exe > 150 || _req_grade_sign > 150)
		throw (GradeTooLowException());
	std::cout << _name << ": AForm name/grades constructor called " << std::endl;
}

AForm&	AForm::operator=( const AForm& other ) {
	_is_signed = other._is_signed;
	std::cout << "AForm copy assignment called" << std::endl;
	return (*this);
}

AForm::~AForm() {
	std::cout << _name << ": Default AFrom destructor called" << std::endl;
}

std::string	AForm::getName() const {return(this->_name);}
size_t		AForm::getIsSigned() const {return(this->_is_signed);}
size_t		AForm::getReqSign() const {return(this->_req_grade_sign);}
size_t		AForm::getReqExe() const {return(this->_req_grade_exe);}

void		AForm::setIsSigned(size_t i) {this->_is_signed = i;}

void AForm::beSigned(Bureaucrat& crat) {
	if (crat.getGrade() > _req_grade_sign)
		throw GradeTooLowException();
	_is_signed = 1;
	std::cout << _name << " is now signed!" << std::endl;
}

AForm::GradeTooHighException::GradeTooHighException() {
	std::cout << "Grade to high exception" << std::endl;
}

AForm::GradeTooLowException::GradeTooLowException() 
{
	std::cout << "Grade to low exception" << std::endl;
}

std::ostream& operator<<(std::ostream &os, const AForm &other) {
	os << "AForm name: " << other.getName() << ", Signed: " << other.getIsSigned() << " Required grade for Sign: " << other.getReqSign() << " Required grade for Exe: " << other.getReqExe();
	return os;
}