# include "BitcoinExchange.hpp"
# include <exception>
# include <iostream>
# include <map>
# include <vector>
# include <fstream>
using std::cout;
using std::endl;

std::vector<std::string> ft_split(const std::string& str, char delimiter) {
    std::vector<std::string> tokens;
    size_t start = 0;
    size_t end = str.find(delimiter);

    while (end != std::string::npos) {
        tokens.push_back(str.substr(start, end - start));
        start = end + 1;
        end = str.find(delimiter, start);
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

void addToMap(std::string& key, std::string& value, std::map<std::string, std::string>& map) {
    cout << "value" << value <<endl;
    cout << "key" << key << endl;
    (void)map;
    (void)key;

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
        cout << "aa";
        throw std::runtime_error("Error: Unable to open file: " + fileName);
    }
    std::string line;
    while (std::getline(file, line))
    {
        std::vector<std::string> v =  ft_split(line, '|');
        addToMap(v[0], v[1], map);
    }
    
    
}

int main(int ac, char **av) {
    if (ac == 2) {
        try {

            validation(av[1]);
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