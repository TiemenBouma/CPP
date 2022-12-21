#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class	Bureaucrat
{
	private:
		const std::string	_name;
		size_t				_grade;
	public:
		Bureaucrat& operator=(const Bureaucrat &other );
		Bureaucrat( void );
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat(const std::string name, const int grade);
		~Bureaucrat( void );

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
		size_t			getGrade() const;
		void		increment();
		void		decrement();

		void		signForm(Form& form);

};
std::ostream& operator<<(std::ostream &os, const Bureaucrat &other);

#endif
