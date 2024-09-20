#include <iostream>
#include "Contact.hpp"

namespace ft{

bool isAlpha(const char& ch)
{
	return ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'));
}

bool isDigit(const char& ch)
{
	return (ch >= '0' && ch <= '9');
}

bool isAllLetters(const std::string& str) {
	for (size_t i = 0; i < str.length(); i++) {
		if (ft::isAlpha(str[i]) == false)
			return false;
	}
	return true;
}

bool isAllDigits(const std::string& str) {
	for (size_t i = 0; i < str.length(); i++) {
		if (ft::isDigit(str[i]) == false)
			return false;
	}
	return true;
}
}

std::string Contact::get_darkest_secret(){
	return darkest_secret;
}

std::string Contact::get_last_name(){
	return last_name;
}

std::string Contact::get_first_name(){
	return first_name;
}

std::string Contact::get_nickname(){
	return nickname;
}

std::string Contact::get_phone_number(){
	return phone_number;
}


void	Contact::set_first_name()
{
	std::cout << "Enter First Name: " << std::endl;
	while (getline(std::cin, first_name)) {
		if (first_name.empty() == false)
		{
			if (ft::isAllLetters(first_name) == true)
				break;
			std::cout << "First name should contain only letters, Try again" << std::endl;
			continue;
		}
		std::cout << "Please enter the name" << std::endl;
	}
}

void	Contact::set_last_name()
{
	std::cout << "Enter Last Name: " << std::endl;
	while (getline(std::cin, last_name)) {
		if (last_name.empty() == false)
		{
			if (ft::isAllLetters(last_name) == true)
				break;
			std::cout << "Last name should contain only letters, Try again" << std::endl;
			continue;
		}
		std::cout << "Please enter the name" << std::endl;
	}
}

void	Contact::set_phone_number()
{
	std::cout << "Enter Phone number: " << std::endl;
	while (getline(std::cin, phone_number)) {
		if (phone_number.empty() == false)
		{
			if (ft::isAllDigits(phone_number) == true)
				break;
			std::cout << "Phone number should contain only numbers, Try again" << std::endl;
			continue;
		}
		std::cout << "Please enter the number" << std::endl;
	}
}

void	Contact::set_nickname()
{
	std::cout << "Enter Nickname: " << std::endl;
	while (getline(std::cin, nickname)) {
		if (nickname.empty() == false)
			break;
		std::cout << "Minimum one charecter you should enter for Nickname" << std::endl;
	}
}

void	Contact::set_darkest_secret()
{
	std::cout << "Enter your darkest secret: " << std::endl;
	while (getline(std::cin, darkest_secret)) {
		if (darkest_secret.empty() == false)
			break;
		std::cout << "Minimum one charecter you should enter for Darkest_secret" << std::endl;
	}
}
