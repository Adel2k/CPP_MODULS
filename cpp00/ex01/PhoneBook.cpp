#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
	this->size = 0;
	this->len = 0;
	this->index = 0;
	
}

void PhoneBook::addContact(Contact& new_contact)
{
	if (size < MAX_NUM)
	{
		contacts[size] = new_contact;
		size++;
	}
	else
	{
		size = 0;
		contacts[size++] = new_contact;
	}
}

void	PhoneBook::print_all_contacts()
{
	std::cout << std::setw(10) <<"ID" << std::setw(10) << "|First Name" << std::setw(10) << "|Last Name" << std::setw(10) << "|Nickname"<< std::endl;
	std::cout << " --------- ---------- ---------- ----------" << std::endl;
	if(len != MAX_NUM)
		len = size;
	else
		len = MAX_NUM;
	for (int i = 0; i < len; i++)
	{
		std::cout << std::setw(10) << i ;
		if (contacts[i].get_first_name().length() > 10)
			std::cout << "|" << std::setw(10) << contacts[i].get_first_name().substr(0 , 9) + "." ;
		else
			std::cout << "|" << std::setw(10) << contacts[i].get_first_name();
		if (contacts[i].get_last_name().length() > 10)
			std::cout << "|" << std::setw(10) << contacts[i].get_last_name().substr(0 , 9) + "." ;
		else
			std::cout << "|" << std::setw(10) << contacts[i].get_last_name();
		if (contacts[i].get_nickname().length() > 10)
			std::cout << "|" << std::setw(10) << contacts[i].get_nickname() << std::endl;
		else
			std::cout << "|" << std::setw(10) << contacts[i].get_nickname() << std::endl;
	}
}

void	PhoneBook::search()
{
	std::string	input;
	std::cout << "Type an index between 0-7: ";
	
	while (getline(std::cin, input))
	{
		if (input[0] >= '0' && input[0] <= '7') {
			index = input[0] - '0';
			if (index < size) {
				std::cout << "First name: " << contacts[index].get_first_name() << std::endl;
				std::cout << "Last name: " << contacts[index].get_last_name() << std::endl;
				std::cout << "Nickname: " << contacts[index].get_nickname() << std::endl;
				std::cout << "Phone number: " << contacts[index].get_phone_number() << std::endl;
				std::cout << "Darkest secret: " << contacts[index].get_darkest_secret() << std::endl;
				return ;
			}
			else {
				std::cerr << "Invalid index, try 0 - 7" << std::endl;
				continue ;
			}
		}
		else {
			std::cerr << "Invalid index, try 0 - 7" << std::endl;
			continue ;
		}
	}
	return;
}