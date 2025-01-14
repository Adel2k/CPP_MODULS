# include "RPN.hpp"

using std::cout;
using std::endl;

int main(int ac, char **av) {
    if (ac == 2) {
        RPN cal(av[1]);
    }
    else 
        std::cerr << "Please enter the numbers" << endl;
    return 0;
}