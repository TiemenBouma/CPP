#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include <ostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm 
{
	private:
		const std::string	_name;
		bool				_is_signed;
		const size_t		_req_grade_sign;
		const size_t		_req_grade_exe;
	public:
		AForm();
		AForm(const AForm& other);
		AForm(const std::string& name, const size_t req_grade_sign, const size_t req_grade_exe);
		AForm&	operator=(const AForm& other);
		~AForm();

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

		std::string	getName() const;
		size_t	getIsSigned() const;
		size_t	getReqSign() const;
		size_t	getReqExe() const;

		void		setIsSigned(size_t i);
		//void		setName(std::string& name);
		
		void beSigned(Bureaucrat& crat);
		virtual void execute(Bureaucrat const & executor) = 0;
};

std::ostream& operator<<(std::ostream &os, const AForm &other);

#endif
