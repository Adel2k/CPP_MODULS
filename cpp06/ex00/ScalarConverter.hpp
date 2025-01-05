#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iomanip> 
# include <iostream>
# include <cmath>
# include <cstring> 


class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& other);
        ~ScalarConverter();

        ScalarConverter&    operator=(const ScalarConverter& other);


    public:
        static void         convert(const std::string &lit);
        static void         convertChar(const std::string& lit);
        static void         convertDigit(const std::string& lit);
};


#endif