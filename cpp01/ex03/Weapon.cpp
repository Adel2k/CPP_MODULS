#include "Weapon.hpp"

Weapon::Weapon(){};

Weapon::Weapon(std::string msg)
{
	this->type = msg;
}

const std::string& Weapon::getType() const{
	return type;
}

void Weapon::setType(std::string msg){
	this->type = msg;
}