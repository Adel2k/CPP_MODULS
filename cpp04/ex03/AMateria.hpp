#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
class ICharacter;

class AMateria
{
	protected:
		std::string	type;

	public:
		AMateria();
		AMateria(AMateria& other);
		AMateria(std::string const& type);
		virtual ~AMateria();

		AMateria&			operator=(AMateria& other);

		virtual	AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);

		std::string const&	getType() const;
};

#endif