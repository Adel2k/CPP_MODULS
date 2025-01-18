#ifndef PMGREME_HPP
# define PMGREME_HPP

# include <exception>
# include <iostream>
# include <map>
# include <vector>
# include <fstream>
# include <string>
# include <cstring>
# include <algorithm>
# include <cstdlib>
# include <ctime>
# include <cctype>
# include <sstream>
# include <cmath>
# include <deque>
# include <iomanip>

using std::cout;
using std::endl;

class PmgreMe
{
    private:
        std::deque<int>     deq;
        std::vector<int>    vec;

        PmgreMe();
        PmgreMe(const PmgreMe&);
        PmgreMe& operator=(const PmgreMe&);

        void    print(const char& c);
        void    printTime(double& vec, double& deq);

    public:
        PmgreMe(int ac, char **av);
        ~PmgreMe();

};

template <typename Container>
bool    isSorted(Container& c) {
    for (size_t i = 0; i < (c.size() - 1); i++) {
        if (c[i] <= c[i + 1])
            continue;
        else  
            return false;
    }
    return true;
}

template <typename Container>
void	insertion_sort(Container &c) {
	for (size_t i = 1; i < c.size(); i++)
	{
		int	j = i;
		while (j > 0 && c[j - 1] > c[j])
		{
			std::swap(c[j - 1], c[j]);
			j--;
		}
	}
}

template <typename Container>
void	insert(Container &left, Container &right) {
	size_t n = 0;
	size_t power = 0;
	size_t start = 0;
	size_t end = 0;

	for (size_t i = 0; i < right.size();)
	{
		++power;

		n = pow(2, power) - n;

		start += n;

		end = start - n;

		if (start > right.size())
			start = right.size();

		for (size_t j = start - 1; j >= end;)
		{
			left.insert(std::upper_bound(left.begin(), left.end(), right[j]), right[j]);
			++i;
			if (j == 0)
				break ;
			--j;
		}
	}
}


template <typename Container>
void sort(Container &c) {
    Container a;
    Container b;

    if (c.size() < 4) {
        insertion_sort(c);
        return;
    }
    for (size_t i = 0; i < c.size() - 1; i += 2) {
        if (c[i] > c[i + 1]) {
            a.push_back(c[i + 1]);
            b.push_back(c[i]);
        } else {
            a.push_back(c[i]);
            b.push_back(c[i + 1]);
        }
    }
    if (c.size() % 2 == 1) {
        b.push_back(c[c.size() - 1]);
    }
    sort(a);
    insert(a, b);
    c = a;
}

#endif