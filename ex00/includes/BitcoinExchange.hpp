/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:35:25 by lciullo           #+#    #+#             */
/*   Updated: 2024/01/10 18:16:36 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

				class invalidConversion : public std::exception
				{
					public :
								const char *	what() const throw() 
								{
									return ("Error, conversion failed");
								}
				};
				
				//======    Methods                ======
				
				void fillMap(void);
				void parseInfile(const char *infile);
				bool onlyWhitespace(std::string line);
				bool isBetweenDigit(std::string line);
				std::string stringTrim(std::string const &str);
				bool parseDate(std::string date);
				bool checkDateFornat(std::string date);
				void parseValue(std::string date, std::string stringValue);
				bool checkValueFormat(std::string stringValue);		
};

#endif 