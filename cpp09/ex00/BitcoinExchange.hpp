#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <exception>
# include <iostream>
# include <map>
# include <vector>
# include <fstream>
# include <string>
# include <algorithm>
# include <cstdlib>
# include <cctype>

using std::cout;
using std::endl;

class BitcoinExchange
{
    private:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange&);

        std::map<std::string, std::string> map;
        std::string    fileName;

    public:
        BitcoinExchange(const std::string& av);
        ~BitcoinExchange();

        BitcoinExchange& operator=(const BitcoinExchange&);

        void    validation();
        void    validateValue(const std::string& value);
        void    validateDate(const std::string& value);
        void    addToMap(std::string& key, std::string& value, std::map<std::string, std::string>& map);
        void    checkDate(std::vector<std::string> date);
        bool    fileIdentifier(const std::string& fileName, const std::string& format);
        std::string trim(const std::string& str);
        std::vector<std::string> split(const std::string& str, const char delimiter);
};

bool isDigit(const char& ch);

#endif