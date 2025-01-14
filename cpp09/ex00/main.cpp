# include "BitcoinExchange.hpp"
# include <exception>
# include <iostream>
# include <map>
# include <vector>
# include <fstream>
using std::cout;
using std::endl;

#include <string>
#include <algorithm>
#include <cctype>

void ft_trim(std::string& result) {
    if (result.empty())
        return ;
    result.erase(result.begin(), std::find_if(result.begin(), result.end(), [](unsigned char ch) {
        return !std::isspace(ch);
    }));

    result.erase(std::find_if(result.rbegin(), result.rend(), [](unsigned char ch) {
        return !std::isspace(ch);
    }).base(), result.end());
}

void    validateValue(const std::string& value) {
    int V = std::atoi(value.c_str());
    if (V < 0 || V > 1000)
        throw std::invalid_argument("The value is too high or too low");
}

std::vector<std::string> ft_split(const std::string& str, const char delimiter) {
    std::vector<std::string> tokens;
    size_t start = 0;
    size_t end = str.find(delimiter);

    while (end != std::string::npos) {
        std::string token = str.substr(start, end - start);

        if (!token.empty() && std::none_of(token.begin(), token.end(), ::isspace)) 
            tokens.push_back(str.substr(start, end - start));
        start = end + 1;
        end = str.find(delimiter, start);
    }

    std::string token = str.substr(start);
    if (!tokens.empty() && std::none_of(token.begin(), token.end(), ::isspace)) {
        tokens.push_back(token);
    }
    return tokens;
}

void    validateDate(std::string& date) {
    ft_trim(date);
    if (date.length() != 10)
        throw std::invalid_argument("Invalid date: " + date);
    std::vector<std::string> dateV = ft_split(date, '-');
    int year = std::atoi(dateV[0].c_str());
    if (year < 0 || year > 2100)
        throw std::invalid_argument("Invalid date: " + date);
    int month = std::atoi(dateV[1].c_str());
    if (month < 0 || month >= 12)
        throw std::invalid_argument("Invalid date: " + date);
    int day = std::atoi(dateV[2].c_str());
    if (day < 0 || day >= 31)
        throw std::invalid_argument("Invalid date: " + date);
}

void addToMap(std::string& key, std::string& value, std::map<std::string, std::string>& map) {
    map[key] = value;
}


bool    fileIdentifier(const std::string& fileName, const std::string& format) {
    return fileName.size() >= format.size() &&
           fileName.compare(fileName.size() - format.size(), format.size(), format) == 0;
}

void    validation(const std::string& fileName) {
    std::map<std::string, std::string> map;
    if (!fileIdentifier(fileName, ".txt")) {

        throw std::exception();
    }
    std::ifstream file(fileName);
    if (!file.is_open()) {
        throw std::runtime_error("Error: Unable to open file: " + fileName);
    }

    std::string line;
    if (!std::getline(file, line)) {
        throw std::runtime_error("Error: File is empty or unable to read the first line.");
    }

    while (std::getline(file, line))
    {
        std::vector<std::string> v =  ft_split(line, '|');
        try {
            validateDate(v[0]);
            validateValue(v[1]);
        }
        catch (std::exception& e) {
            cout << e.what() << endl;
        }
        addToMap(v[0], v[1], map);
    }
}

int main(int ac, char **av) {
    if (ac == 2) {
        try {

            validation(av[1]);
        }
        catch (const std::invalid_argument& e) {
           cout << e.what() << endl;
        }
        catch (const std::exception& e) {
           cout << e.what() << endl;
        }
    }
    else {
        cout << "Please enter the file name." << endl;
        // exit(1);
    }
}