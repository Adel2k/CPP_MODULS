# include "templates.hpp"

using std::endl;
using std::cout;

int main() {
    int a = 2;
    int b = 3;

    cout << "Befor swap a = " << a << " b = " << b << endl;
    ::swap( a, b );
    cout << "After swap a = " << a << " b = " << b << endl;

    cout << "a = " << a << ", b = " << b << endl;
    cout << "min( a, b ) = " << ::min( a, b ) << endl;
    cout << "max( a, b ) = " << ::max( a, b ) << endl;
    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);

    cout << "c = " << c << ", d = " << d << endl;
    cout << "min( c, d ) = " << ::min( c, d ) << endl;
    cout << "max( c, d ) = " << ::max( c, d ) << endl;

    return 0;
}