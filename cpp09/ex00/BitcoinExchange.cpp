# include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}
BitcoinExchange::BitcoinExchange(const BitcoinExchange& ) {}
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange&) {return *this;}
BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const std::string& av) : fileName(av) {
    readDatabase();
    validation();
}

#include <string>
#include <cctype>
#include <algorithm>

bool is_not_space(unsigned char ch) {
    return !std::isspace(ch);
}

std::string trim(const std::string& str) {
    std::string::const_iterator first_non_space = std::find_if(str.begin(), str.end(), is_not_space);
    std::string::const_reverse_iterator last_non_space = std::find_if(str.rbegin(), str.rend(), is_not_space);
    if (first_non_space != str.end()) {
        return std::string(first_non_space, last_non_space.base());
    }
    return "";
}

int    BitcoinExchange::validateValue(std::string& value) {
    value = trim(value);
    for (size_t i = 0; i < value.length(); i++) {
        if (isDigit(value[i]) == false && value[i] != '.') {
            std::cerr << "The value should be in range of 1 - 1000" << endl;
            return 1;
        }
    }
    int V = std::atoi(value.c_str());
    if (V < 0 || V > 1000) {
        std::cerr << "The value should be in range of 1 - 1000" << endl;
        return 1;
    }
    return 0;
}

std::vector<std::string> BitcoinExchange::split(const std::string& str, const char delimiter) {
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

int    BitcoinExchange::checkDate(std::vector<std::string> date) {
    if (date.size() != 3) {
        std::cerr << "Invalid date" << endl;
        return 1;
    }
    for (int j = 0; j < 3; j++) {
        for (size_t i = 0; i < date[j].length(); i++) {
            if (isDigit(date[j][i]) == false){
                std::cerr << "Invalid date" << endl;
                return 1;
            }
        }
    }
    return 0;
}

int BitcoinExchange::validateDate(std::string& date) {
    date = trim(date);
    int dashCount = 0;
    for (std::string::const_iterator it = date.begin(); it != date.end(); ++it) {
        char ch = *it;
        if (ch == '-') {
            dashCount++;
        }
    }
    if (dashCount != 2) {
        std::cerr << "Invalid date format (too many or too few dashes): " + date << std::endl;
        return 1;
    }
    size_t firstDash = date.find('-');
    size_t secondDash = date.find('-', firstDash + 1);

    if (firstDash == std::string::npos || secondDash == std::string::npos || secondDash == date.length() - 1) {
        std::cerr << "Invalid date format: " + date << std::endl;
        return 1;
    }
    std::string yearStr = date.substr(0, firstDash);
    std::string monthStr = date.substr(firstDash + 1, secondDash - firstDash - 1);
    std::string dayStr = date.substr(secondDash + 1);

    int year = std::atoi(yearStr.c_str());
    int month = std::atoi(monthStr.c_str());
    int day = std::atoi(dayStr.c_str());
    if (year < 0 || year > 2100) {
        std::cerr << "Invalid year for: " + date << std::endl;
        return 1;
    }
    if (month < 1 || month > 12) {
        std::cerr << "Invalid month for: " + date << std::endl;
        return 1;
    }
    if (day < 1 || day > 31) {
        std::cerr << "Invalid day for: " + date << std::endl;
        return 1;
    }
    return 0;
}

void BitcoinExchange::findDate(const std::string& key, const std::string& value) {
    std::map<std::string, float>::iterator nearest = map.lower_bound(key);
    if (nearest == map.end() || nearest->first > key) {
        if (nearest != map.begin()) {
            --nearest;
        } else {
            std::cerr << "Error: No valid date found before " << key << std::endl;
            return;
        }
    }
    const std::string& nearestDate = nearest->first;
    float btcValue = nearest->second;
    float amount = std::atof(value.c_str());

    std::cout << "On date '" << nearestDate << "' BTC costs => " << value << " with " << btcValue
              << " | Total: " << amount * btcValue << std::endl;
}


void    BitcoinExchange::readDatabase() {
    std::ifstream file("data.csv");
    if (!file.is_open()) {
        throw std::runtime_error("Error: Unable to open file: data.csv");
    }
    std::string key;
    std::string value;
    while (std::getline(file, key, ',') && std::getline(file, value)) {
        map[key] = std::atof(value.c_str());
    }
}

void    BitcoinExchange::validation() {
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
        std::size_t commaPos = line.find('|');
        if (commaPos == std::string::npos) {
            std::cerr << "Error: usage: [YYYY-MM-DD | value]" << endl;
            continue;
        }
        std::string key = line.substr(0, commaPos);
        std::string value = line.substr(commaPos + 1);
        if (validateDate(key) == 1)
            continue;
        if (validateValue(value) == 1)
            continue;
        findDate(key, value);
    }
}

std::map<std::string, float> BitcoinExchange::getMap() const {
    return map;
}

bool isDigit(const char& ch) {
        return (ch >= '0' && ch <= '9');
}