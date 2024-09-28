#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string Name;

	public:
		Character();
		Character(std::string Name);
		Character(Character& other);
		~Character();

		Character& operator=(Character& other);
};

#endif