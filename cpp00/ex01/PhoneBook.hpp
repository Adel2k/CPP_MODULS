#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip>
# include <iostream>

# define MAX_NUM 3

class PhoneBook {
	public:
		PhoneBook();
		Contact contacts[MAX_NUM];
		void addContact(Contact& new_contact);
		void print_all_contacts();
		void search();
		int	size;
		int len;
		int	index;

};

#endif 