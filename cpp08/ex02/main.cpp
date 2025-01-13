#include "MutantStack.hpp"

using std::cout;
using std::endl;

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

int main()
{
    MutantStack<int> mstack;

    mstack.push(10);
    mstack.push(20);
    mstack.push(30);
    mstack.push(40);

    cout << GREEN << "Top element: " << mstack.top() << RESET << std::endl;

    mstack.pop();
    cout << BLUE << "Size after pop: " << mstack.size() << RESET << std::endl;

    mstack.push(50);
    mstack.push(60);
    mstack.push(70);

    cout << YELLOW << "Stack elements using iterators:" << RESET << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    while (it != ite)
    {
        cout << *it << std::endl;
        ++it;
    }

    std::stack<int> copied_stack(mstack);
    cout << CYAN << "Size of copied stack: " << copied_stack.size() << RESET << std::endl;

    mstack.push(80);
    mstack.push(90);

    cout << RED << "Final stack elements using iterators:" << RESET << std::endl;
    it = mstack.begin();
    ite = mstack.end();
    while (it != ite)
    {
        cout << *it << std::endl;
        ++it;
    }
    return 0;
}
