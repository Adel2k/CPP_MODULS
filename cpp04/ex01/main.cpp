# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"


using std::cout;
using std::endl;

int main()
{
	const Animal*	k[5];
	const Animal*	j[5];
	cout << "\033[1;35m############################# Constructing #############################\033[0m" << endl << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Dogs are here -----> ";
		j[i] = new Dog();
		cout << endl;
	}
	for (int i = 0; i < 5; i++) {
		cout << "Cats are here -----> ";
		k[i] = new Cat();
		cout << endl;
	}
	//---------------------------
	// cout << endl << "\033[1;34m############################# Testing Deep Copy #############################\033[0m" << endl << endl;
	//---------------------------
	cout << endl << "\033[1;31m############################# Deconstructing #############################\033[0m" << endl << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Dogs are Dead -----> ";
		delete j[i];//should not create a leak
		cout << endl;
	}
	for (int i = 0; i < 5; i++) {
		cout << "Cats are Dead -----> ";
		delete k[i];
		cout << endl;
	}
	// system("leaks Animal");
	return 0;
	
}

// int main() {
// 	Subject Main
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	delete j;//should not create a leak
// 	delete i;
// 	return 0;
// }