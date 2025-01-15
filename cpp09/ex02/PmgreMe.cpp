# include "PmgreMe.hpp"

namespace ft{

    bool checkOverflow(const char *value) {
        if (std::strlen(value) >= 9)
            return false;
        return true;
    }
    bool isNumber(const char *value) {
        if (!checkOverflow(value))
            return false;
        for (size_t i = 0; i < std::strlen(value); i++) {
            if (value[i] < '0' || value[i] > '9')
                return false;
        }
        return true;
    }

}

PmgreMe::PmgreMe() {};
PmgreMe::PmgreMe(const PmgreMe&) {};
PmgreMe& PmgreMe::operator=(const PmgreMe&) {return *this;};
PmgreMe::~PmgreMe() {};

void PmgreMe::printTime() {
}

void PmgreMe::print(const char& c) {
    if (c == 'b')
        cout << "Before: ";
    if (c == 'a')
        cout << "After: ";
    for (std::deque<int>::iterator it = deq.begin(); it != deq.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

PmgreMe::PmgreMe(int ac, char **av) {
    for (int i = 1; i < ac; i++) {
        if (!ft::isNumber(av[i])) {
            std::cerr << "Error: just numbers between 0 - 9999999" << endl;
            return ;
        }
        deq.push_back(std::atoi(av[i]));
        vec.push_back(std::atoi(av[i]));
    }
    print('b');
    printTime();
}