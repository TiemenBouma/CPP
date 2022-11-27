#ifndef PHONEBOOK_CPP
#define PHONEBOOK_CPP

#include "Contact.hpp"

class	Phonebook {
	public:
	void	add(void);
	void	init(void);
	void	search(void);

	private:
	Contact contacts[8];
	int		curr_index;
	int		total_contacts;


};

#endif