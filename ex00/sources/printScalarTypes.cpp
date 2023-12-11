/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printScalarTypes.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:19:29 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/11 09:15:18 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void printDouble(std::string input)
{   
	double doubleRes = strtod(input.c_str(), NULL);
	double fractionalPart = 0;
	double integralPart = std::modf(doubleRes, &fractionalPart);
	int intRes = static_cast<int>(doubleRes);
	if (integralPart == 0.0 && doubleRes > 31.0 && doubleRes < 127.0)
		std::cout << "char: '" << static_cast<char>(intRes) << "'" << std::endl; 
	else
		std::cout << "char: Non displayable" << std::endl;
	if (doubleRes <= INT_MAX && doubleRes >= INT_MIN)
		std::cout << "int: " << static_cast<int>(doubleRes) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	if (doubleRes <= FLT_MAX && doubleRes >= -FLT_MAX)
		std::cout << "float: " << static_cast<float>(doubleRes) << "f" << std::endl;
	else
		std::cout << "float: impossible" << std::endl; 
	if (doubleRes <= DBL_MAX && doubleRes >= -DBL_MAX)
		std::cout << "double: " << static_cast<double>(doubleRes) << std::endl;
	else
		std::cout << "double: impossible" << std::endl;
	return ;
}

void printInt(std::string input)
{
	long	intRes;

	intRes = strtol(input.c_str(), NULL, 10);
	if (intRes > 31 && intRes < 127)
		std::cout << "char: '" << static_cast<char>(intRes) << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (intRes <= INT_MAX && intRes >= INT_MIN)
		std::cout << "int: " << static_cast<int>(intRes) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	if (intRes <= FLT_MAX && intRes >= -FLT_MIN)
		std::cout << "float: " << static_cast<float>(intRes) << ".0f" << std::endl;
	else
		std::cout << "float: impossible" << std::endl;
	if (intRes <= DBL_MAX && intRes >= -DBL_MIN)
		std::cout << "double: " << static_cast<double>(intRes) << std::endl;
	else
		std::cout << "double: impossible" << std::endl;
	return ;
}

void printChar(std::string input)
{
	char c = input[0];
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
	return ;
}

void printFloat(std::string input)
{
	float floatRes = strtof(input.c_str(), NULL);
	float fractionalPart = 0;
	float integralPart = std::modf(floatRes, &fractionalPart);
	int intRes = static_cast<int>(floatRes);
	if (integralPart == 0.0f && floatRes > 31.0f && floatRes < 127.0f)
		std::cout << "char: '" << static_cast<char>(intRes) << "'" << std::endl; 
	else
		std::cout << "char: Non displayable" << std::endl;
	if (floatRes <= 2147483647.0f && floatRes >= -2147483648.0f)
		std::cout << "int: " << static_cast<int>(floatRes) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	if (floatRes <= FLT_MAX && floatRes >= -FLT_MIN)
		std::cout << "float: " << static_cast<float>(floatRes) << "f" << std::endl;
	else
		std::cout << "float: impossible" << std::endl; 
	if (floatRes <= DBL_MAX && floatRes >= -DBL_MIN)
		std::cout << "double: " << static_cast<double>(floatRes) << std::endl;
	else
		std::cout << "double: impossible" << std::endl;
	return ;
}

bool isExeceptionPrint(std::string input)
{
	if (input == "nan" || input == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return (true);
	}

	else if (input == "+inf" || input == "inf" || input == "inff" || input == "+inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
		return (true);
	}

	else if (input == "-inf" || input == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return (true);
	}
	return (false);
}