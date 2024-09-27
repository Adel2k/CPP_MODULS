#ifndef Cat_HPP
# define Cat_HPP

# include "Animal.hpp"
# include "Brain.hpp"
class Cat : public Animal
{
	private:
		Brain* B;
	public:
		Cat();
		Cat(Cat& other);
		virtual ~Cat();

		Cat&	operator=(Cat& other);
		void	makeSound();

};


#endif