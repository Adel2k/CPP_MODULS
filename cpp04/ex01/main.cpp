# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"


using std::cout;
using std::endl;

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	
	return 0;
}