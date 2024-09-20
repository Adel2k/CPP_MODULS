#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class	Weapon{

	private:
		std::string type;

	public:
		Weapon();
		Weapon(std::string msg);

		const std::string&	getType() const;
		void				setType(std::string msg);
};

#endif