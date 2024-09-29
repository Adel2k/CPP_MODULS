# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"


using std::cout;
using std::endl;

int main() {

	cout  << endl << "\033[32m########### CONSTRUCTORS ###########\033[0m" << endl << endl;
	Animal *a = new Cat;
	Cat b;
	// Animal* meta = new Animal(); //should be a compile error with this
	Animal* j = new Dog();
	Animal* i = new Cat();

	cout  << endl << "\033[33m########### TESTING ###########\033[0m" << endl << endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	// meta->makeSound();
	cout  << endl << "\033[31m########### DESTRUCTORS ###########\033[0m" << endl << endl;
	delete a;
	// delete meta;
	delete j;
	delete i;


	return 0;

}