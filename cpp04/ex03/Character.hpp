#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>

# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string	Name;
		AMateria*	inventory[4];


	public:
		Character();
		Character(const std::string Name);
		Character(const Character& other);
		~Character();

		Character&			operator=(const Character& other);
		const std::string&	getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif