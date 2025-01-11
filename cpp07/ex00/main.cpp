# include "templates.hpp"

# include <iostream>
# include <string>
using std::cout;
using std::endl;

#define RESET       "\033[0m"
#define BOLD        "\033[1m"
#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define YELLOW      "\033[33m"
#define BLUE        "\033[34m"
#define MAGENTA     "\033[35m"
#define CYAN        "\033[36m"
#define UNDERLINE   "\033[4m"

template <typename T>
void displayResults(const std::string& label, T a, T b, const std::string& color) {
    cout << color << "   " << label << RESET << " a = " << a << ", b = " << b << endl;
}

template <typename T>
void runTest(const std::string& testName, T a, T b) {
    cout << BOLD << YELLOW << "=== " << testName << " ===" << RESET << endl;

    cout << BLUE << "Before Swap:" << RESET << endl;
    displayResults("Initial values:", a, b, MAGENTA);

    ::swap(a, b);

    cout << GREEN << "After Swap:" << RESET << endl;
    displayResults("Swapped values:", a, b, CYAN);

    cout << UNDERLINE << "Comparisons:" << RESET << endl;
    cout << "   " << GREEN << "min( a, b )" << RESET << " = " << ::min(a, b) << endl;
    cout << "   " << RED << "max( a, b )" << RESET << " = " << ::max(a, b) << endl;

    cout << BOLD << "--------------------------------------" << RESET << endl;
}

int main() {
    runTest("Integer Test", 2, 3);
    runTest("String Test", std::string("chaine1"), std::string("chaine2"));

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