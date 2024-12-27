#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main(void) {
	
	{
		const unsigned int size = 2;
		MateriaSource* sources[size];

		unsigned int i = 0;
		std::cout << std::endl;
		std::cout << "\033[35m***********************************************\033[0m" << std::endl;
		std::cout << std::endl;
		std::cout << "\033[32mCreating MateriaSource objects\033[0m" << std::endl;
		while (i < size) {
			std::cout << "\033[34m---------------------------------------------\033[0m" << std::endl;
			sources[i] = new MateriaSource();
			i++;
		}
		std::cout << "\033[34m---------------------------------------------\033[0m" << std::endl;
		
		std::cout << std::endl;
		std::cout << "\033[32mLearning Ice and Cure Materias\033[0m" << std::endl;
		for (unsigned int j = 0; j < size; j++) {
			std::cout << "\033[34m---------------------------------------------\033[0m" << std::endl;
			sources[j]->learnMateria(new Ice());
			sources[j]->learnMateria(new Cure());
		}
		std::cout << "\033[34m---------------------------------------------\033[0m" << std::endl;

		std::cout << std::endl;
		std::cout << "\033[32mCreating Characters\033[0m" << std::endl;
		Character* me = new Character("me");
		Character* bob = new Character("bob");

		std::cout << std::endl;
		std::cout << "\033[32mEquipping Materias to Characters\033[0m" << std::endl;
		AMateria* tmp;
		tmp = sources[0]->createMateria("ice");
		me->equip(tmp);
		tmp = sources[0]->createMateria("cure");
		me->equip(tmp);

		tmp = sources[1]->createMateria("ice");
		bob->equip(tmp);
		tmp = sources[1]->createMateria("cure");
		bob->equip(tmp);

		std::cout << std::endl;
		std::cout << "\033[32mUsing Materias\033[0m" << std::endl;
		me->use(0, *bob);
		me->use(1, *bob);
		bob->use(0, *me);
		bob->use(1, *me);

		std::cout << std::endl;
		std::cout << "\033[31mDeleting MateriaSource and Characters\033[0m" << std::endl;
		for (unsigned int j = 0; j < size; j++) {
			std::cout << "\033[34m---------------------------------------------\033[0m" << std::endl;
			delete sources[j];
		}
		delete me;
		delete bob;

		std::cout << std::endl;
		std::cout << "\033[35m***********************************************\033[0m" << std::endl;
		std::cout << std::endl;
	}
	system("leaks War");
	return 0;
}