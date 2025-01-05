#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iomanip> 
# include <iostream>
# include <cmath>


class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& other);
        ~ScalarConverter();

        ScalarConverter& operator=(const ScalarConverter& other);

    public:
        static void convert(const std::string &lit);

};


#endif