#ifndef CONTACT_CPP
#define CONTACT_CPP

#include <string>

class	Contact
{
	private:
		std::string		_first_name;
		std::string		_last_name;
		std::string		_nickname;
		std::string		_phone_number;
		std::string		_darkest_secret;
		unsigned int	_index;
	
	public:
		void	init(int index);
		void	set_first(void);
		void	set_last(void);
		void	set_nickname(void);
		void	set_phone(void);
		void	set_secret(void);
		void	set_index(unsigned int index);
		std::string	get_first(void);
		std::string	get_last(void);
		std::string	get_nickname(void);
		std::string	get_phone(void);
		std::string	get_secret(void);
		unsigned int	get_index(void);
		int 	check_first_l(void);
		int 	check_last_l(void);
		int 	check_nickname_l(void);
		int 	check_phone_l(void);
		int 	check_secret_l(void);

};

#endif