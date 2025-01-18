# include "BitcoinExchange.hpp"

int main(int ac, char **av) {
    if (ac == 2) {
        try {
            BitcoinExchange ob(av[1]);
        }
        catch (const std::exception& e) {
            cout << e.what() << endl;
            return 1;
        }
    }
    else {
        cout << "Error: Usage: ./btc [input.txt]" << endl;
        return 1;
    }
}