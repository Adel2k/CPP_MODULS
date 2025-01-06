#include "Base.hpp"

using std::cout;
using std::endl;

int	main(void) {

	cout << endl << "\033[1;34m################# TESTING ###################\033[0m" << endl << endl;
	{
		Base*	a = Base::generate();

		cout << "\033[32mGenerated Random class -> \033[0m";
		Base::identify(a);

		cout << endl << "\033[31mDeleting Random class -> \033[0m";
		delete a;
	}	
	cout << endl << "\033[34m>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\033[0m" << endl << endl;
	{
		Base	base;
		cout << "\033[32mBase class -> \033[0m";
		Base::identify(base);
		cout << endl;

		A		a;
		cout << "\033[32mA class -> \033[0m";
		Base::identify(a);
		cout << endl;

		B		b;
		cout << "\033[32mB class -> \033[0m";
		Base::identify(b);
		cout << endl;

		C		c;
		cout << "\033[32mC class -> \033[0m";
		Base::identify(c);
		cout << endl;
	}
	cout << endl << "\033[34m>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\033[0m" << endl << endl;


	return (0);
}