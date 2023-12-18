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

void BitcoinExchange::fillMap(void)
{
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
		this->_dataBase[date] = strtof(value.c_str(), NULL);
	}
	file.close();
	return ;
}

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
		if (pos == std::string::npos)
		{
			std::cerr << RED << "Not value was found " << RESET << std::endl;
		}
		date = line.substr(0, pos);
		date = stringTrim(date);
		if (date == "date")
			continue ;
		if (!parseDate(date))
			std::cout << RED << "Invalid date, format : Year-Month-Day " << RESET << std::endl;
		else
		{
			value = line.substr(pos + 2, line.size() - 1);
			parseValue(date, value);
		}
	}
	file.close();
	return ;
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



bool BitcoinExchange::parseDate(std::string date)
{	
	int year = 0;
	int month = 0;
	int day = 0;
	char dash;

	std::istringstream iss(date);
	iss >> year >> dash >> month >> dash >> day;
	if (year < 2009 || year > 2023) 
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


void	BitcoinExchange::parseValue(std::string date, std::string stringValue)
{
	float	value;
	
	value = strtof(stringValue.c_str(),NULL);
	if (value < 0)
	{
		std::cout << RED << "Error, there is a negative value" << RESET << std::endl;
		return ;
	}
	if (value > 1000)
	{
		std::cout << RED << "Error, value is too large" << RESET << std::endl;
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