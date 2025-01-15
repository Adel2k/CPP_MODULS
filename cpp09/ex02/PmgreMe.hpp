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
# include <cctype>
# include <sstream>
# include <deque>

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
        void    printTime();

    public:
        PmgreMe(int ac, char **av);
        ~PmgreMe();
};


#endif