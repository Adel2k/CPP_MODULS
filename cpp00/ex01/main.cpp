#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	PhoneBook phone_book;
	std::string line;
	std::cout << "Please enter the command >>> ";
	while (getline(std::cin, line))
	{
		if (line == "ADD")
		{
			Contact new_contact;
			new_contact.set_first_name();
			if(std::cin.eof() == false)
			{
				new_contact.set_last_name();
				new_contact.set_nickname();
				new_contact.set_phone_number();
				new_contact.set_darkest_secret();
				phone_book.addContact(new_contact);
			}
		}
		else if (line == "SEARCH")
		{
			if(std::cin.eof() == false)
			{
				if (phone_book.size == 0){
					std::cerr << "There is no contacts" << std::endl;
					std::cout << "Try (ADD, SEARCH or EXIT) ";
					continue;
				}
				phone_book.print_all_contacts();
				phone_book.search();
			}
		}
		else if (line == "EXIT")
			return (1);
		else
		{
			std::cout << "Try (ADD, SEARCH or EXIT) ";
			continue;
		}
		std::cout << "Please enter the command >>> ";
	}
	return (0);
}
