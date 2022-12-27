#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <ostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form 
{
	private:
		const std::string	_name;
		bool				_is_signed;
		const size_t		_req_grade_sign;
		const size_t		_req_grade_exe;
	public:
		Form();
		Form(const Form& other);
		Form(const std::string& name, const size_t req_grade_sign, const size_t req_grade_exe);
		Form&	operator=(const Form& other);
		virtual ~Form();

		class GradeTooHighException : public std::exception 
		{
			public:
				GradeTooHighException();
		};

		class GradeTooLowException : public std::exception
		{ 
			public:
				GradeTooLowException();
		};

		// class FormSignedException : public std::exception
		// { 
		// 	public:
		// 		FormSignedException();
		// };

		std::string	getName() const;
		size_t	getIsSigned() const;
		size_t	getReqSign() const;
		size_t	getReqExe() const;
		void beSigned(Bureaucrat& crat);
};

std::ostream& operator<<(std::ostream &os, const Form &other);

#endif