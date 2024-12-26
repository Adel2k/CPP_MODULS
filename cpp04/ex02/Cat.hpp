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
		Cat(const Cat& other);
		virtual ~Cat();

		Cat&	operator=(const Cat& other);
		void	makeSound() const;
		void	printer() const;
};


#endif