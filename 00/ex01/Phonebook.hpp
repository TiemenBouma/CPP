/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:53:18 by tbouma            #+#    #+#             */
/*   Updated: 2022/12/02 13:53:19 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CPP
#define PHONEBOOK_CPP

#include "Contact.hpp"

class	Phonebook {
	public:
	void	add(void);
	void	init(void);
	void	search(void);

	private:
	Contact _contacts[8];
	int		_curr_index;
	int		_total_contacts;
	int		_total_added;


};

#endif