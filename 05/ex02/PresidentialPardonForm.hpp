#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	std::string _target;
public:
    PresidentialPardonForm(std::string target);
    ~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm& other);
	PresidentialPardonForm&	operator=( const PresidentialPardonForm& other );
	
	void	execute(Bureaucrat const & executor) const;
};

std::ostream& operator<<(std::ostream &os, const PresidentialPardonForm &other);

#endif
