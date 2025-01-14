#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>


using std::cout;
using std::endl;

class RPN
{
    private:
        std::stack<int>     _stack;
        long unsigned int   operatorCount;

        RPN();
        RPN(const RPN& other);
        RPN& operator=(const RPN& );

    public:
        RPN(const char* string);
        ~RPN();


        void    validation(const std::string& string);
};


#endif