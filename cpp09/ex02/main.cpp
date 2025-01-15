# include "PmgreMe.hpp"

int main(int ac, char **av) {
    if (ac < 2) {
        std::cerr << "Error: Enter random numbers" << endl;
        return 1;
    }
    PmgreMe(ac, av);
    return 0;
}