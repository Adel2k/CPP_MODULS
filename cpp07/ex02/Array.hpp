#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>
class Array {
    private:
        T*      array;
        size_t _size;

    public:
        Array();
        Array(unsigned int n);
        Array(const Array& other);
        ~Array();

        Array&  operator=(const Array& other);
        T&      operator[](const size_t n) const;

        size_t    size()const;
};

#include "Array.tpp"

#endif