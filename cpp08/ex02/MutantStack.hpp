#ifndef MutantStack_HPP
# define MutantStack_HPP

# include <iostream>
# include <stack>
# include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
    private:

    public:
        MutantStack();
        MutantStack(const MutantStack& other);
        ~MutantStack();

        typedef std::deque<T> container;
        typedef typename container::iterator iterator;
        typedef typename container::const_iterator const_iterator;
        typedef typename container::reverse_iterator reverse_iterator;
        typedef typename container::const_reverse_iterator const_reverse_iterator;

        iterator    begin();
        iterator    end();
        const_iterator begin() const;
        const_iterator end() const;
        reverse_iterator rbegin();
        reverse_iterator rend();
        const_reverse_iterator rbegin() const;
        const_reverse_iterator rend() const;

        MutantStack& operator=(const MutantStack& other);
};

# include "MutantStack.tpp"

#endif