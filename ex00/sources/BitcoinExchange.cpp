/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:35:33 by lciullo           #+#    #+#             */
/*   Updated: 2024/01/10 12:56:33 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

//======  Constructor / Destructor ======

BitcoinExchange::BitcoinExchange(void) { }

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj) 
{
	*this = obj;
	return ;
}

BitcoinExchange::~BitcoinExchange(void) { }

//======    Overload operator     ======

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &obj) 
{
	(void)obj;
	return (*this);
}

//======    Methods                ======

//======    Fill Map               ======

void BitcoinExchange::fillMap(void)
{
	float convertValue;
	std::string line;
	std::ifstream file("data.csv");
	if (!file.is_open())
		throw openError();                          
	std::string date;
	std::string value;
	while (!file.eof())
	{
		getline(file, date, ',');
		getline(file, value, '\n');
		std::istringstream convert(value);
		if (!convert)
			throw (invalidConversion());
		convert >> convertValue;
		this->_dataBase[date] = convertValue;
	}
	file.close();
	return ;
}

//======    Parse infile        ======

void BitcoinExchange::parseInfile(const char *infile)
{
	std::string 	line;
	std::string 	date;
	std::string 	value;
	std::ifstream	file(infile);
	size_t 			pos = 0;
	if (!file.is_open())
		throw openError();                          
	while (!file.eof())
	{
		getline(file, line);
		pos = line.find("|");		
		if (pos == std::string::npos && onlyWhitespace(line) == false)
		{
			std::cerr << RED << "Error: bad input => " << line << RESET << std::endl;
			continue ;
		}
		date = line.substr(0, pos);
		date = stringTrim(date);
		if (date == "date")
			continue ;
		if (!parseDate(date) && !onlyWhitespace(date))
		{
			std::cout << RED << "Error: invalid date " << date << RESET << std::endl;
			continue ;
		}
		if (!onlyWhitespace(date))
		{
			if ((line[line.size() - 1] == '|') || isBetweenDigit(line))
			{
				value = line.substr(pos + 1, line.size() - 1);
				parseValue(date, value);
			}
			else
			{
				value = line.substr(pos + 2, line.size() - 1);
				parseValue(date, value);
			}
		}
	}
	file.close();
	return ;
}

bool BitcoinExchange::onlyWhitespace(std::string line)
{
	size_t count = 0;
	for (size_t i = 0; i < line.size(); i++)
	{
		if (isspace(line[i]))
			count++;
	}
	if (count == line.size())
		return (true);
	return (false);
}

bool BitcoinExchange::isBetweenDigit(std::string line)
{
	size_t	len = line.size();
	size_t i = 0;
	while (i < len)
	{
		if (line[i] == '|')
			break ;
		i++;
	}
	if (isdigit(line[i - 1]) || isdigit(line[i + 1]))
		return (true);
	return (false);
}

std::string BitcoinExchange::stringTrim(std::string const &str)
{
	std::string newString; 
	size_t start = 0;
	while (start < str.length() && std::isspace(str[start])) 
	{
		start++;
	}
	size_t end = str.length();
	while (end > 0 && std::isspace(str[end - 1])) 
	{
		end--;
	}
	newString = str.substr(start, end - start);
	return (newString);
}


//======    Parse date          ======

bool BitcoinExchange::parseDate(std::string date)
{	
	int year = 0;
	int month = 0;
	int day = 0;
	char dash;
	
	if (!checkDateFornat(date))
		return (false);
	std::istringstream string(date);
	if (!string)
		throw (invalidConversion());
	string >> year >> dash >> month >> dash >> day;
	if (year < 2009 || year > 2024) 
		return (false);
	if (year == 2024 && month > JAN)
		return (false);
	if (month < JAN || month > DEC) 
		return (false);
	if ((month == JAN || month == MARCH || month == MAY || month == JULY \
			|| month == AUG || month == OCT || month == DEC) && (day <= 0 || day > 31)) 
		return (false);
	else if ((month == APRIL || month == JUNE || month == SEPT || month == NOV) \
				&& (day <= 0 || day > 30)) 
		return (false);
	if ((year == 2012 || year == 2016 || year == 2020) && month == FEB && (day <= 0 || day > 29)) 
		return (false);
	else if (month == FEB && (day <= 0 || day > 28)) 
		return (false);
	return (true);
}

bool BitcoinExchange::checkDateFornat(std::string date)
{
	int i = 0;
	std::string stringYear;
	std::string stringMonth;
	std::string stringDay;
	std::string token;
	std::istringstream format(date);
	if (!format)
		throw (invalidConversion());
	while (std::getline(format, token, '-')) 
	{
		if (i == 0)
			stringYear = token;
		if (i == 1)
			stringMonth = token;
		if (i == 2)
			stringDay = token;	
		i++;
	}
	if ((stringYear.size() != 4) || (stringMonth.size() != 2) || (stringDay.size() != 2))
		return (false);
	if (stringYear[0] == '0')
		return (false);
	return (true);
}

//======    Parse value        ======

void	BitcoinExchange::parseValue(std::string date, std::string stringValue)
{
	float	value;
	
	if (!checkValueFormat(stringValue))
		return ;
	std::istringstream convert(stringValue);
	if (!convert)
		throw (invalidConversion());
	convert >> value;
	if (value < 0)
	{
		std::cout << RED << "Error: negative number." << RESET << std::endl;
		return ;
	}
	if (value > 1000)
	{
		std::cout << RED << "Error: too large number." << RESET << std::endl;
		return ;
	}
	if (this->_dataBase.find(date) != this->_dataBase.end())
	{
		std::cout << date << " => " << value << " = " << (value * this->_dataBase[date]) << std::endl;
	}
	else 
	{
		std::map<std::string, float>::iterator	it = this->_dataBase.lower_bound(date);
		std::cout << date << " => " << value << " = " << (value * it->second) << std::endl;
	}
}

bool BitcoinExchange::checkValueFormat(std::string stringValue)
{
	int		point = 0;
	
	if (stringValue.size() == 0)
	{
		std::cout << RED << "Error: not value found" << RESET << std::endl;
		return (false);
	}
	for (size_t i = 0; i < stringValue.size(); i++)
	{
		if ((stringValue[i] >= '0' && stringValue[i] <= '9') || (stringValue[i] == ' '))
			continue ;
		if (stringValue[i] == '.')
		{
			point++;
			continue ;
		}
		else
		{
			if (stringValue[i] == '-')
				std::cout << RED << "Error: negative number." << RESET << std::endl;
			else
				std::cout << RED << "Error: put only digit." << RESET << std::endl;
			return (false);
		}
	}
	if (point > 1)
	{
		std::cout << RED << "Error: " << stringValue <<  " wrong format" << RESET << std::endl;
		return (false);
	}
	return (true);
}