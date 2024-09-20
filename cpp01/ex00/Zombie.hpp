# ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>

class	Zombie{
	public:
		Zombie(std::string	name);
		~Zombie();
		std::string getName();
		void announce( void );

	private:
		std::string	name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
#endif