# include "RPN.hpp"

using std::cout;
using std::endl;

int main(int ac, char **av) {
    if (ac != 2) {
        std::cerr << "Please enter the numbers" << endl;
        return 1;
    }
    RPN cal(av[1]);
    return 0;
}
