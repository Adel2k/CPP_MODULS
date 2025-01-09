#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void    iter(T* address, int len, void(*func)(const T&)) {
    int i = 0;

    if (!address)
        return ;
    while (i < len) {
        func(address[i]);
        i++;
    }
}

template<typename T>
void	printInt(T& num) {
	std::cout << num << std::endl; 
}

template<typename T>
void	printChar(T& c) {
	std::cout << c << std::endl; 
}

#endif