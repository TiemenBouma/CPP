#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "AForm.hpp"

class AForm;

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
		
		std::string	getName() const;
		size_t			getGrade() const;
		void		increment();
		void		decrement();

		void		signForm(AForm& form);
		void		executeForm(AForm const & form);

};
std::ostream& operator<<(std::ostream &os, const Bureaucrat &other);

#endif
