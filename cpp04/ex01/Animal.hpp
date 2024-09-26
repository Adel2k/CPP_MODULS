#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		Animal(Animal& other);
		virtual ~Animal();

		Animal& operator=(Animal& other);
		virtual void makeSound();
		std::string getType() const;
};



#endif