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

int    BitcoinExchange::validateValue(const std::string& value) {
    for (size_t i = 0; i < value.length(); i++) {
        if (!isDigit(value[i]) && value[i] != '.') {
            std::cerr << "The value should be in range of 1 - 1000" << endl;
            return 0;
        }
    }
    int V = std::atoi(value.c_str());
    if (V < 0 || V > 1000) {
        std::cerr << "The value should be in range of 1 - 1000" << endl;
        return 0;
    }
    return 1;
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
    if (date.size() > 3)
        std::cerr << "Invalid date" << endl;
    for (int j = 0; j < 3; j++) {
        for (size_t i = 0; i < date[j].length(); i++) {
            if (!isDigit(date[j][i])){
                std::cerr << "Invalid date" << endl;
                return 0;
            }
        }
    }
    return 1;
}

int    BitcoinExchange::validateDate(const std::string& date) {
    // std::string date = trim(value);
    std::vector<std::string> dateV = split(date, '-');
    if (!checkDate(dateV))
        return 0;
    int year = std::atoi(dateV[0].c_str());
    if (year < 0 || year > 2100) {
        std::cerr << "Invalid date for: " + date << endl;
        return 0;
    }
    int month = std::atoi(dateV[1].c_str());
    if (month < 0 || month > 12) {
        std::cerr << "Invalid date: " + date << endl;
        return 0;
    }
    int day = std::atoi(dateV[2].c_str());
    if (day < 0 || day > 31) {
        std::cerr << "Invalid date: " + date << endl;
        return 0;
    }
    return 1;
}

void    BitcoinExchange::addToMap(std::string& key, std::string& value) {
    map[key] = std::atof(value.c_str());
}


bool    BitcoinExchange::fileIdentifier(const std::string& fileName, const std::string& format) {
    return fileName.size() >= format.size() &&
           fileName.compare(fileName.size() - format.size(), format.size(), format) == 0;
}

void    BitcoinExchange::findDate() {
    std::ifstream file("data.csv");
     if (!file.is_open()) {
        throw std::runtime_error("Error: Unable to open file: " + fileName);
    }
    std::string line;
    while (std::getline(file, line)) {
        std::size_t commaPos = line.find(',');
        if (commaPos != std::string::npos) {
            std::string key = line.substr(0, commaPos);
            std::string value = line.substr(commaPos + 1);
            for (std::map<std::string, float>::iterator it = map.begin(); it != map.end(); ++it) {
                const std::string& mKey = it->first;
                if (key.find(mKey) != std::string::npos) {
                    std::cout << "On date '" << key << "' BTC costs-> " << value << " with " << it->second << " | " << std::atof(value.c_str()) * it->second << std::endl;
                }
            }
        }
    }

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
        if (v.size() != 2) {
            std::cerr << "YYYY-MM-DD | value" << endl;
            continue;
        }
        if (!validateDate(v[0]))
            continue;
        if (!validateValue(v[1]))
            continue;
        addToMap(v[0], v[1]);
    }
    findDate();
}

std::map<std::string, float> BitcoinExchange::getMap() const {
    return map;
}

bool isDigit(const char& ch) {
        return (ch >= '0' && ch <= '9');
}