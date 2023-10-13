#ifndef BitcoinExchange_HPP
#define BitcoinExchange_HPP

#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>
#include <fstream>
#include <sstream>
#include <typeinfo>
#include <cmath>
#include <map>

#define MAX 2147483647
#define TRUE 1
#define FALSE 0

class BitcoinExchange 
{
    private:
        std::map<std::string, float> bitcoinData;

        int     validateDate(std::string s);
        int     validateInput(std::string s);
        void    checkCsvFile();
        void    checkInputFile(char *file);
        void    bitcoin(char *file);
        void    checkInfo(std::string);
        int     checkDate(const std::string&);
        int     checkValue(const std::string&);
        void    printBit(std::string date, float n);
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& ref);
        BitcoinExchange&	operator=(const BitcoinExchange& ref);
        ~BitcoinExchange();

        void    play(char *file);
        class Error : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

#endif