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

void PmgreMe::printTime(double& vec, double& deq) {
    cout << "Time to process with std::vector : " << std::fixed << std::setprecision(5) << vec << endl;
    cout << "Time to process with std::deque : " << std::fixed << std::setprecision(5) << deq << endl;

}

void PmgreMe::print(const char& c) {
    if (c == 'b')
        cout << "Before: ";
    if (c == 'a')
        cout << "After: ";
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}


PmgreMe::PmgreMe(int ac, char **av) {
    for (int i = 1; i < ac; i++) {
        if (!ft::isNumber(av[i])) {
            std::cerr << "Error: just numbers between 0 - 9999999" << av[i] << endl;
            return ;
        }
        deq.push_back(std::atoi(av[i]));
        vec.push_back(std::atoi(av[i]));
    }
    print('b');
    clock_t start = clock();
    sort(vec);
    clock_t end = clock();
    double  vec_time = static_cast<double>(end - start) / CLOCKS_PER_SEC;
    start = clock();
    sort(deq);
    end = clock();
    double  deq_time = static_cast<double>(end - start) / CLOCKS_PER_SEC;
    print('a');
    if (!isSorted(vec) || !isSorted(deq)) {
        cout << "It's not sorted corectlly!!!" << endl;
        return ;
    }
    printTime(vec_time, deq_time);
}