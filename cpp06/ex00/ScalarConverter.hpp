#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iomanip> 
# include <iostream>
# include <cmath>
# include <cstring> 
# include <cstdlib>
# include <sstream>
# include <cstdint>

class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& other);
        ~ScalarConverter();

        ScalarConverter&    operator=(const ScalarConverter& );


    public:
        static void         convert(const std::string &lit);
};

void         convertChar(const std::string& lit);
void         convertDigit(const std::string& lit);

#endif