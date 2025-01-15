# include "BitcoinExchange.hpp"

int main(int ac, char **av) {
    if (ac == 2) {
        try {
            BitcoinExchange ob(av[1]);
        }
        catch (const std::exception& e) {
           cout << e.what() << endl;
        }
    }
    else {
        cout << "Please enter the file name." << endl;
        return 1;
    }
}