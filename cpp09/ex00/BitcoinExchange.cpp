# include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}
BitcoinExchange::BitcoinExchange(const BitcoinExchange& ) {}
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange&) {return *this;}
BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const std::string& av) : fileName(av) {
    validation();
}

std::string BitcoinExchange::trim(const std::string& str) {
    if (str.empty()) {
        return ""; // Handle empty string safely
    }
    size_t start = str.find_first_not_of(" \t\n\r\f\v");
    if (start == std::string::npos) {
        return "";
    }

    size_t end = str.find_last_not_of(" \t\n\r\f\v");
    return str.substr(start, end - start + 1);
}

void    BitcoinExchange::validateValue(const std::string& value) {
    for (size_t i = 0; i < value.length(); i++) {
        if (!isDigit(value[i]))
            throw std::invalid_argument("The value should be in range of 1 - 1000");
    }
    int V = std::atoi(value.c_str());
    if (V < 0 || V > 1000)
        throw std::invalid_argument("The value should be in range of 1 - 1000");
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

void    BitcoinExchange::checkDate(std::vector<std::string> date) {
    if (date.size() > 3)
        throw std::invalid_argument("Invalid date");
    for (int j = 0; j < 3; j++) {
        for (size_t i = 0; i < date[j].length(); i++) {
            if (!isDigit(date[j][i])){
                throw std::invalid_argument("Invalid date");
            }
        }
    }
}

void    BitcoinExchange::validateDate(const std::string& date) {
    // std::string date = trim(value);
    std::vector<std::string> dateV = split(date, '-');
    checkDate(dateV);
    int year = std::atoi(dateV[0].c_str());
    if (year < 0 || year > 2100)
        throw std::invalid_argument("Invalid date for: " + date);
    int month = std::atoi(dateV[1].c_str());
    if (month < 0 || month > 12) 
        throw std::invalid_argument("Invalid date: " + date);
    int day = std::atoi(dateV[2].c_str());
    if (day < 0 || day > 31)
        throw std::invalid_argument("Invalid date: " + date);
}

void    BitcoinExchange::addToMap(std::string& key, std::string& value, std::map<std::string, std::string>& map) {
    map[key] = value;
}


bool    BitcoinExchange::fileIdentifier(const std::string& fileName, const std::string& format) {
    return fileName.size() >= format.size() &&
           fileName.compare(fileName.size() - format.size(), format.size(), format) == 0;
}

void    BitcoinExchange::validation() {
    if (!fileIdentifier(fileName, ".txt")) {
        throw std::invalid_argument("The passed file should be <.txt> form");
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
        std::vector<std::string> v =  split(line, '|');
        if (v.size() != 2)
            throw std::invalid_argument("YYYY-MM-DD | value");
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

bool isDigit(const char& ch) {
        return (ch >= '0' && ch <= '9');
}