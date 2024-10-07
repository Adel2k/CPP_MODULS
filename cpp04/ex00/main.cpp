# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"


using std::cout;
using std::endl;

int main() {

	cout  << endl << "\033[32m########### CONSTRUCTORS ###########\033[0m" << endl << endl;
	cout << "Cat called -------> ";
	Animal *a = new Cat;
	cout << endl;
	cout << "Cat called -------> ";
	Cat b;
	cout << endl;
	cout << "Animal called -------> ";
	Animal* meta = new Animal();
	cout << endl;
	cout << "Dog called -------> ";
	Animal* j = new Dog();
	cout << endl;
	cout << "Cat called -------> ";
	Animal* i = new Cat();
	cout << endl;

	cout  << endl << "\033[33m########### TESTING ###########\033[0m" << endl << endl;
	cout << "The type is " << j->getType() << " " << endl;
	cout << "The type is " << i->getType() << " " << endl;
	cout << "The " << j->getType() << "'s sound is ";
	i->makeSound(); //will output the cat sound!
	cout << "The " << i->getType() << "'s sound is ";
	j->makeSound();
	cout << "The " << meta->getType() << "'s sound is ";
	meta->makeSound();
	cout  << endl << "\033[31m########### DESTRUCTORS ###########\033[0m" << endl << endl;
	cout << a->getType() << " is dead--------> ";
	delete a;
	cout << endl << meta->getType() << " is dead--------> ";
	delete meta;
	cout << endl << j->getType() << " is dead--------> ";
	delete j;
	cout << endl << i->getType() << " is dead--------> ";
	delete i;



	return 0;

}