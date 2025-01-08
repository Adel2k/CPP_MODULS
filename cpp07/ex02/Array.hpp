#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
    private:
        T*   array;

    public:
        Array();
        Array(unsigned int n);
        Array(const Array& other);
        ~Array();

        Array& operator=(const Array& other);

        unsigned int size()const;
};

#include "Array.tpp"

#endif