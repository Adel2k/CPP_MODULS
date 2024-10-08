#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* B;

	public:
		Dog();
		Dog(Dog& other);
		virtual ~Dog();

		Dog&	operator=(Dog& other);
		void	makeSound();
		void	printer();

};


#endif