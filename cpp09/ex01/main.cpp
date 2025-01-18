# include "RPN.hpp"

using std::cout;
using std::endl;

int main(int ac, char **av) {
    if (ac != 2) {
        std::cerr << "Error: usage: ./RPN [numbers]" << endl;
        return 1;
    }
    try {
        RPN cal(av[1]);
    }
    catch (const std::exception& e) {
        cout << e.what() << endl;
        return 1;
    }
    return 0;
}
