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
# include <sstream>

using std::cout;
using std::endl;
using std::string;
using std::map;

class BitcoinExchange
{
    private:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange&);

        std::map<std::string, float> map;
        std::string     fileName;

    public:
        BitcoinExchange(const std::string& av);
        ~BitcoinExchange();

        BitcoinExchange& operator=(const BitcoinExchange&);

        void    validation();
        void    findDate();
        int    validateValue(const std::string& value);
        int    validateDate(const std::string& value);
        void    addToMap(std::string& key, std::string& value);
        int    checkDate(std::vector<std::string> date);
        bool    fileIdentifier(const std::string& fileName, const std::string& format);
        std::string trim(const std::string& str);
        std::vector<std::string> split(const std::string& str, const char delimiter);
        std::map<std::string, float> getMap() const;
};

bool isDigit(const char& ch);

#endif