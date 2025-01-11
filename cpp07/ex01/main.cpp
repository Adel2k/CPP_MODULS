#include "iter.hpp"
#include <iostream>
#include <cstddef>

using std::cout;
using std::endl;

#define RESET       "\033[0m"
#define BOLD        "\033[1m"
#define MAGENTA     "\033[35m"
#define CYAN        "\033[36m"
#define GREEN       "\033[32m"

int main(void) {
    {
        cout << CYAN << "***********************************************" << RESET << endl;
        cout << BOLD << "Test 1: Array of Integers (Non-const)" << RESET << endl;

        int array[] = {42, 57, 17, -28, -7};
        size_t size = sizeof(array) / sizeof(array[0]);

        iter(array, size, printInt);

        cout << endl;
        cout << CYAN << "***********************************************" << RESET << endl;
    }
    {
        cout << CYAN << "***********************************************" << RESET << endl;
        cout << BOLD << "Test 2: Array of Integers (Const)" << RESET << endl;

        const int array[] = {98, -57, 7, 21, -42};
        size_t size = sizeof(array) / sizeof(array[0]);

        iter(array, size, printInt);

        cout << endl;
        cout << CYAN << "***********************************************" << RESET << endl;
    }
    {
        cout << CYAN << "***********************************************" << RESET << endl;
        cout << BOLD << "Test 3: Array of Characters (Non-const)" << RESET << endl;

        char array[] = {'a', 'b', 'c', 'd', 'e'};
        size_t size = sizeof(array) / sizeof(array[0]);

        iter(array, size, printChar);

        cout << endl;
        cout << CYAN << "***********************************************" << RESET << endl;
    }
    {
        cout << CYAN << "***********************************************" << RESET << endl;
        cout << BOLD << "Test 4: Array of Characters (Const)" << RESET << endl;

        const char array[] = {'e', 'd', 'c', 'b', 'a'};
        size_t size = sizeof(array) / sizeof(array[0]);

        iter(array, size, printChar);

        cout << endl;
        cout << CYAN << "***********************************************" << RESET << endl;
        cout << endl;
    }

    return 0;
}


// class Awesome
// {
// 	public:
// 	Awesome( void ) : _n( 42 ) { return; }
// 	int get( void ) const { return this->_n; }
// 	private:
// 	int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template< typename T >
// void print( T const & x ) { cout << x << endl; return; }

// int main() {
// 	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
// 	Awesome tab2[5];
// 	iter( tab, 5, print );
// 	iter( tab2, 5, print );
// 	return 0;
// }