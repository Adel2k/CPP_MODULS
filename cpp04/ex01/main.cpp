# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"


using std::cout;
using std::endl;

int main()
{
	const Animal* k;
	const Animal* j;

	for (int i = 0; i < 5; i++)
		j = new Dog();
	for (int i = 0; i < 5; i++)
		k = new Cat();
	for (int i = 0; i < 5; i++)
		delete j;//should not create a leak
	for (int i = 0; i < 5; i++)
		delete k;
	
	return 0;
}