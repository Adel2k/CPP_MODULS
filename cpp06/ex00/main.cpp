#include "ScalarConverter.hpp"

using std::cout;
using std::endl;

int validation(const std::string& av) {
    int i = 0;

    if (av.length() == 1 && !std::isdigit(av[0]))
        return 0;
    while (av[i])
    {
        if (av == "-inff" || av == "+inff" || av == "inff" || av == "inf" || av == "-inf" || av == "+inf") {
            cout << "char\t->\tImpossible" << endl;
            cout << "int\t->\tImpossible" << endl;
            if (av[0] == '-') {
                cout << "float\t->\t-inff" << endl;
                cout << "double\t->\t-inf" << endl;
            }
            else {
                cout << "float\t->\tinff" << endl;
                cout << "double\t->\tinf" << endl;
            }
            exit(0);
        }
        else if (av == "nanf" ||av == "nan") {
            cout << "char\t->\tImpossible" << endl;
            cout << "int\t->\tImpossible" << endl;
            cout << "float\t->\tnanf" << endl;
            cout << "double\t->\tnan" << endl;
            exit(0);
        }
        if (std::isdigit(av[i]) || av[i] == 'f' || av[i] == '.' || av[i] == '+' || av[i] == '-')
            i++;
        else
            return 1;
    }
    return 0;
}

int main(int ac, char **av) {
    if (ac == 2) {
        if (validation(av[1]) == 0) {
            ScalarConverter::convert(av[1]);
            return (0);
        }
        else {
            cout << "Wrong arguments, please try with a char, int double or float" << endl;
            return (1);
        }
    }
    else {
        cout << "Wrong arguments, please try with a char, int double or float" << endl;
        return (1);
    }
}