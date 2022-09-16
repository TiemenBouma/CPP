#ifndef PHONEBOOK_CPP
#define PHONEBOOK_CPP

#include "Contact.hpp"
//#include <array>

class	Phonebook
{
	public:
	void	add(void);
	// void	search(void);

	private:
	Contact contacts[8];
	int		curr_index;


};

#endif