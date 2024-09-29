# include "AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include "ICharacter.hpp"
# include "Character.hpp"



using std::cout;
using std::endl;

int main()
{
	AMateria* b;
	AMateria* a = new Ice;
	ICharacter *t = new Character("b") ;
	b = a->clone();
	cout << a->getType() << endl;
	cout << b->getType() << endl;
	t->equip(a);
	t->equip(a);
	t->equip(a);
	t->equip(a);
	t->equip(a);

	a->use(*t);

	delete a;
	delete b;
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	// AMateria* tmp;
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	// delete src;
	return 0;
}