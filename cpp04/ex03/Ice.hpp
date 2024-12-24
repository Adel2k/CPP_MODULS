#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice& other);
		~Ice();

		Ice&		operator=(Ice& other);
		AMateria*	clone() const;
		void		use(ICharacter& target);
};
#endif