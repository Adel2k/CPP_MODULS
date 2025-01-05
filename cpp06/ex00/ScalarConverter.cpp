#include "ScalarConverter.hpp"

using std::cout;
using std::endl;

// Orthodox
ScalarConverter::ScalarConverter() {
    cout << "\033[1;34mScalarConverter default constructor called.\033[0m" << endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& other) {
    cout << "\033[1;34mScalarConverter copy constructor called.\033[0m" << endl;
    *this = other;

}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
    cout << "\033[1;34mScalarConverter copy assignment called.\033[0m" << endl;
    if (this != &other)
        return *this;
    return *this;
}

ScalarConverter::~ScalarConverter() {
    cout << "\033[1;34mScalarConverter destructor called.\033[0m" << endl;
}
//

void ScalarConverter::convert(const std::string& lit) {
    cout << "char\t->\t" + static_cast<char>(lit) << endl;
    cout << "int\t->\t" + static_cast<int>(lit) << endl;
    cout << "float\t->\t" + static_cast<float>(lit) << endl;
    cout << "double\t->\t" + static_cast<double>(lit) << endl;
}