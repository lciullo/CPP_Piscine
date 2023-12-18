#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <exception>
#include <map>
#include <cmath>
#include <stdlib.h>
#include <iomanip>
#include <limits>
#include <sstream>


# define RESET		"\033[0m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"

enum {
	JAN = 1,
	FEB = 2,
	MARCH = 3,
	APRIL = 4,
	MAY = 5,
	JUNE = 6,
	JULY = 7,
	AUG = 8,
	SEPT = 9,
	OCT = 10,
	NOV = 11,
	DEC = 12,
};


class BitcoinExchange
{
	private : 	
				//======    Attribute             ======
				
				std::map<std::string, float>  _dataBase;
	public :	
				//======  Constructor / Destructor ======
				
				BitcoinExchange();
				BitcoinExchange(const BitcoinExchange &);
				~BitcoinExchange();
				
				//======    Overload operator     ======
				
				BitcoinExchange& operator=(const BitcoinExchange &);
				
				//======    Exception             ======
				
				class openError : public std::exception
				{
					public :
								const char *	what() const throw() 
								{
									return ("Error, file could not be open");
								}
				};

				//======    Methods                ======
				
				void fillMap(void);
				void parseInfile(const char *infile);
				std::string stringTrim(std::string const &str);
				bool parseDate(std::string date);
				void parseValue(std::string date, std::string stringValue);
};

#endif 