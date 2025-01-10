# include "span.hpp"

//Orthodox
Span::Span() {}

Span::Span(const Span& other) {
    size = other.getSize();
    array = other.getArray();
    *this = other;
}

Span& Span::operator=(const Span& other) {
    if (this != &other) {
        size = other.getSize();
        array = other.getArray();
    }
    return (*this);
}

Span::~Span() {}
//

Span::Span(unsigned int n) : size(n) {}

void    Span::addNumber(int value) {
    if (array.size() >= size)
        throw std::length_error("no more space to add");
    array.push_back(value);
}

std::vector<int>    Span::getArray() const {
    return (array);
}

unsigned int    Span::getSize() const {
    return (size);
}

int     Span::shortestSpan() {
    std::sort(array.begin(), array.end());
    unsigned int tmp = 0;
    unsigned int shortest = INT_MAX;
    for (unsigned int i = 0; i < size; i++) {
        tmp = array[i + 1] - array[i];
        if (tmp < shortest)
            shortest = tmp;
    }
    return (shortest);
}


int     Span::longestSpan() {
    std::sort(array.begin(), array.end());
    int longest = *(array.end() - 1) - *array.begin();
    return (longest);
}