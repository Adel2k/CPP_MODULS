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
}

template <typename T>
Array<T>::Array(unsigned int n) {
	cout << "\033[32mConstructor with parametrs called.\033[0m" << std::endl;
    array = new T[n];
    for (unsigned int i = 0; i < n; i++) {
        array[i] = 0;
        cout << array[i] << endl;
    }
}

template <typename T>
Array<T>::Array(const Array& other) {
	cout << "\033[34mCopy constructor called.\033[0m" << endl;
    unsigned int size = other.size();
    if (size == 0)
        array = NULL;
    else {
        array = new T[size];
        for (unsigned int i = 0; i < size; i++) {
            array[i] = other.array[i];
        }
    }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
	cout << "\033[34mCopy assignment called.\033[0m" << endl;
    if (this != &other) {
        unsigned int size = other.size();
        if (size == 0)
            array = NULL;
        else {
            delete[] array;
            array = new T[size];
            for (unsigned int i = 0; i < size; i++) {
                array[i] = other.array[i];
            }
        }
    }
    return (*this);
}

template <typename T>
unsigned int Array<T>::size() const{
    unsigned int i = 0;
    if (!array)
        return (0);
    while (array[i]) {
        i++;
    }
    return (i);
}

