#include "ScalarConverter.hpp"

using std::cout;
using std::endl;

int validation(char *av) {
    int i = 0;

    if (std::strlen(av) == 1 && !std::isdigit(av[0]))
        return 0;
    while (av[i])
    {
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