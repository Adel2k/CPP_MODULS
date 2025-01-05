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

void ScalarConverter::convertChar(const std::string& lit) {
    cout << "char\t->\t" << "'" << static_cast<char>(lit[0]) << "'" << endl;
    cout << "int\t->\t" << static_cast<int>(lit[0]) << endl;
    cout << "float\t->\t" << std::fixed << std::setprecision(1) << static_cast<float>(lit[0]) << "f" << endl;
    cout << "double\t->\t" << std::fixed << std::setprecision(1) << static_cast<double>(lit[0]) << endl;
}

void ScalarConverter::convertDigit(const std::string& lit) {
//int and char
    try {
        int iValue = std::stoi(lit);
        if ((iValue >= 0 && iValue <= 31) || iValue == 127) 
            cout << "char\t->\tNon-printable" << endl;
        else if (iValue < 0)
            cout << "char\t->\tImpossible" << endl;
        else
            cout << "char\t->\t" << "'" << static_cast<char>(iValue) << "'" << endl;
        cout << "int\t->\t" << iValue << endl;
    }
    catch (const std::invalid_argument& e) {
        cout << "char\t->\tImpossible" << endl;
        cout << "int\t->\tImpossible" << endl;
    }
    catch (const std::out_of_range& e) {
        cout << "char\t->\tImpossible" << endl;
        cout << "int\t->\tImpossible" << endl;
    }
//float
    try {
        float fValue = std::stof(lit);
        if (std::floor(fValue) == fValue) {
            cout << "float\t->\t" << std::fixed << std::setprecision(1) << fValue << "f" << endl;
        }
        else {
            cout << "float\t->\t" << fValue << "f" << endl;
        }
    }
    catch (const std::invalid_argument& e) {
        cout << "float\t->\tImpossible" << endl;
    }
    catch (const std::out_of_range& e) {
        cout << "float\t->\tImpossible" << endl;
    }
//double
    try {
        double dValue = std::stod(lit);
        if (std::floor(dValue) == dValue) {
            cout << "double\t->\t" << std::fixed << std::setprecision(1) << dValue << endl;
        }
        else {
            cout << "double\t->\t" << dValue << endl;
        }
    }
    catch (const std::invalid_argument& e) {
        cout << "double\t->\tImpossible" << endl;
    }
    catch (const std::out_of_range& e) {
        cout << "double\t->\tImpossible" << endl;
    }
}

void ScalarConverter::convert(const std::string& lit) {
    if (lit.length() == 1 && !std::isdigit(lit[0])) {
        convertChar(lit);
    }
    else {
        convertDigit(lit);
    }
}