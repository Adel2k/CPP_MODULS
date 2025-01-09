#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>

template <typename T>
typename T::const_iterator    easyfind( T& container,  int value) {
    return std::find(container.begin(), container.end(), value);
}

#endif