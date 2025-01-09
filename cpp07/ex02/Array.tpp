# include "Array.hpp"

using std::cout;
using std::endl;

template <typename T>
Array<T>::Array() {
	cout << "\033[32mDefault constructor called.\033[0m" << endl;
    array = new T;
}

template <typename T>
Array<T>::~Array() {
	std::cout << "\033[31mDestructor called\033[0m" << std::endl;
    delete[] array;
    array = NULL;
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n) {
	cout << "\033[32mConstructor with parametrs called.\033[0m" << std::endl;
    if (n == 0)
        array = NULL;
    else {
        array = new T[n];
        for (size_t i = 0; i < n; i++) {
            array[i] = 0;
        }
    }
}

template <typename T>
Array<T>::Array(const Array& other) : _size(other._size) {
	cout << "\033[34mCopy constructor called.\033[0m" << endl;
    if (_size == 0)
        array = NULL;
    else {
        array = new T[_size];
        for (size_t i = 0; i < _size; i++) {
            array[i] = other.array[i];
        }
    }
}

template <typename T>
size_t Array<T>::size() const {
    if (!array)
        return (0);
    return (_size);
}


template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
	cout << "\033[34mCopy assignment called.\033[0m" << endl;
    if (this != &other) {
        _size = other._size;
        delete[] array;
        if (other._size == 0)
            array = NULL;
        else {
            array = new T[other._size];
            for (size_t i = 0; i < other._size; i++) {
                array[i] = other.array[i];
            }
        }
    }
    return (*this);
}

template <typename T>
T& Array<T>::operator[](const size_t n) const{
    if (n >= size()) {
        throw std::out_of_range("Index is out of range!");
    }
    return array[n];
}