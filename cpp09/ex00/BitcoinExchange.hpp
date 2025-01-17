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
        void    findDate(const std::string& key, const std::string& value   );
        void readDatabase();
        int    validateValue(std::string& value);
        int    validateDate(std::string& value);
        int    checkDate(std::vector<std::string> date);
        std::vector<std::string> split(const std::string& str, const char delimiter);
        std::map<std::string, float> getMap() const;
};

bool isDigit(const char& ch);

#endif