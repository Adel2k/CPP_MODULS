#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>
# include <exception>
# include <algorithm>
# include <climits>


class Span
{
    private:
        Span();
    
        std::vector<int>    array;
        unsigned int        size;
    
    public:
        Span(unsigned int n);
        Span(const Span& other);
        ~Span();

        Span& operator=(const Span& other);

        void                addNumber(int value);
        void                addNumbers(std::vector<int> values);
        int                 shortestSpan();
        int                 longestSpan();
       
        std::vector<int>    getArray() const;
        unsigned int        getSize() const;
};

#endif