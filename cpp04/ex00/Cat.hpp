#ifndef Cat_HPP
# define Cat_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat& other);
		~Cat();

		Cat&	operator=(Cat& other);
		void	makeSound();

};


#endif