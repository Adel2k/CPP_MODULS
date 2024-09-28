#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>

# include "ICharacter.hpp"

// # include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string	Name;
		int			quantity;
		// AMateria	slots[4];


	public:
		Character();
		Character(std::string Name);
		Character(Character& other);
		~Character();

		Character& operator=(Character& other);
		const std::string& getName() const;
};

#endif