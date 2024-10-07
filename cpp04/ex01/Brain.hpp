#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
class Brain
{
	private:
		std::string ideas[100];

	public:
		Brain();
		Brain(Brain& other);
		~Brain();

		Brain& operator=(Brain& other);
};



#endif