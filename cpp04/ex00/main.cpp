# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"


using std::cout;
using std::endl;

int main() {

	 Animal* meta = new Animal();
	 Animal* j = new Dog();
	 Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	return 0;
	// cout  << endl << "\033[32m########### CONSTRUCTORS ###########\033[0m" << endl << endl;
	// Animal *a = new Cat;
	// Cat b;

	// cout  << endl << "\033[31m########### DESTRUCTORS ###########\033[0m" << endl << endl;
	// delete a;
}