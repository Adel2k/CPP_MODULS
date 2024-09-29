#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>

# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string	Name;
		int			quantity;
		AMateria*	iventory[4];


	public:
		Character();
		Character(std::string Name);
		Character(Character& other);
		~Character();

		Character&			operator=(Character& other);
		const std::string&	getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif