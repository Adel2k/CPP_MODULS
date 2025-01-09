#include "iter.hpp"

// int	main(void) {
	
// 	{
// 		std::cout << "\033[35m***********************************************\033[0m" << std::endl;

// 		int		array[] = {42, 57, 17, -28, -7};
// 		size_t	size = sizeof(array) / sizeof(array[0]);

// 		iter(array, size, printInt);

// 		std::cout << std::endl;
// 		std::cout << "\033[35m***********************************************\033[0m" << std::endl;

// 	}
// 	{

// 		const int	array[] = {98, -57, 7, 21, -42};
// 		size_t		size = sizeof(array) / sizeof(array[0]);

// 		iter(array, size, printInt);

// 		std::cout << std::endl;
// 		std::cout << "\033[35m***********************************************\033[0m" << std::endl;
// 	}
// 	{

// 		char	array[] = {'a', 'b', 'c', 'd','e'};
// 		size_t	size = sizeof(array) / sizeof(array[0]);

// 		iter(array, size, printChar);

// 		std::cout << std::endl;
// 		std::cout << "\033[35m***********************************************\033[0m" << std::endl;
// 	}
// 	{

// 		const char	array[] = {'e', 'd', 'c', 'b','a'};
// 		size_t		size = sizeof(array) / sizeof(array[0]);

// 		iter(array, size, printChar);

// 		std::cout << std::endl;
// 		std::cout << "\033[35m***********************************************\033[0m" << std::endl;
// 		std::cout << std::endl;
// 	}
	
// 	return (0);
// }

class Awesome
{
	public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
	private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
	Awesome tab2[5];
	iter( tab, 5, print );
	iter( tab2, 5, print );
	return 0;
}