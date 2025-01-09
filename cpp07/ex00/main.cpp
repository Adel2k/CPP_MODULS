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

// checklist main
// class Awesome
// {
    // public:
    // Awesome(void) : _n(0) {}
    // Awesome( int n ) : _n( n ) {}
    // Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
    // bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
    // bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
    // bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
    // bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
    // bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
    // bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
    // int get_n() const { return _n; }
    // private:
    // int _n;
// };

// std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

// int main(void)
// {
    // Awesome a(2), b(4);
    // swap(a, b);
    // std::cout << a << " " << b << std::endl;
    // std::cout << max(a, b) << std::endl;
    // std::cout << min(a, b) << std::endl;
    // return (0);
// }