#include "span.hpp"
#include <iostream>
#include <vector>

#define COLOR_RESET "\033[0m"
#define COLOR_RED "\033[31m"
#define COLOR_GREEN "\033[32m"
#define COLOR_YELLOW "\033[33m"
#define COLOR_BLUE "\033[34m"

int main() {
    try {
        std::cout << COLOR_BLUE << "Attempting to add numbers to Span of size 5..." << COLOR_RESET << std::endl;

        Span sp = Span(5);
        sp.addNumber(27);
        sp.addNumber(3);
        sp.addNumber(44);
        sp.addNumber(-5);
        sp.addNumber(648);
        sp.addNumber(71);
    } catch (const std::length_error& e) {
        std::cerr << COLOR_RED << "Error: " << e.what() << COLOR_RESET << '\n';
    }

    try {
        std::cout << COLOR_BLUE << "\nAdding a vector of numbers to Span of size 5..." << COLOR_RESET << std::endl;

        Span sp = Span(5);
        std::vector<int> arr;
        arr.push_back(-54);
        arr.push_back(-23);
        arr.push_back(42);
        arr.push_back(1);
        arr.push_back(592);
        arr.push_back(1024);
        sp.addNumbers(arr);

        std::cout << COLOR_GREEN << "Shortest Span: " << sp.shortestSpan() << COLOR_RESET << std::endl;
        std::cout << COLOR_YELLOW << "Longest Span: " << sp.longestSpan() << COLOR_RESET << std::endl;
    } catch (const std::length_error& e) {
        std::cerr << COLOR_RED << "Error: " << e.what() << COLOR_RESET << '\n';
    }

    try {
        std::cout << COLOR_BLUE << "\nAdding a single number to Span of size 6..." << COLOR_RESET << std::endl;

        Span sp(6);
        std::vector<int> v;
        v.push_back(42);
        sp.addNumbers(v);

        std::cout << COLOR_GREEN << "Shortest Span: " << sp.shortestSpan() << COLOR_RESET << std::endl;
        std::cout << COLOR_YELLOW << "Longest Span: " << sp.longestSpan() << COLOR_RESET << std::endl;
    } catch (const std::length_error& e) {
        std::cerr << COLOR_RED << "Error: " << e.what() << COLOR_RESET << '\n';
    }

    return 0;
}
