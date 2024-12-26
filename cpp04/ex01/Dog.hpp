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
		Dog(const Dog& other);
		virtual ~Dog();

		Dog&	operator=(const Dog& other);
		void	makeSound() const;
		void	printer()const;

};


#endif