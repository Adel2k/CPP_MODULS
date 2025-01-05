#include "ScalarConverter.hpp"

using std::cout;
using std::endl;

// int is_char(const std::string& lit) {
//     if ()
// }

// std::string validation(const std::string& lit) {
//     if (is_char(lit)) {
//         return lit;
//     }
//     else if (is_int(lit)) {
//         return lit;
//     }
//     else if (is_double(lit)) {
//         return lit;
//     }
//     else if (is_float(lit)) {
//         return lit;
//     }
//     cout << "it must be a valid float" << endl;
//     exit (1);
// }

int main(int ac, char **av) {
    if (ac == 2) {
        // std::string res = validation(av[1]);
        ScalarConverter::convert(av[1]);
        return (0);
    }
    else {
        cout << "Wrong arguments, please try with a char, int double or float" << endl;
        return (1);
    }
}