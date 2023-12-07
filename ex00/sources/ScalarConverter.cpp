/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:45:20 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/07 15:42:45 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

//======    Constructors / Destructors    ======

ScalarConverter:: ScalarConverter(void)
{
	std::cout << " ScalarConverter : default constructor called" << std::endl;
	return ;
}

ScalarConverter:: ScalarConverter(const  ScalarConverter &other)
{
	std::cout << " ScalarConverter : copy constructor called" << std::endl;
	*this = other;
	return ;
}

ScalarConverter & ScalarConverter::operator=(const  ScalarConverter &other)
{
	std::cout  << " ScalarConverter :assignement operator called" << std::endl;
	(void)other;
	return (*this);
}

ScalarConverter::~ ScalarConverter(void)
{
	std::cout << " ScalarConverter : destructor called" << std::endl;
	return ;
}

//======	          Method             ======

void ScalarConverter::convert(std::string input)
{
	std::cout << "Is float return : " << isFloat(input) << std::endl;
	return ;
}

bool isInt(std::string input)
{
	for (unsigned long i = 0; i < input.size(); i++)
	{
		if (i == 0 && (input[i] == '-' || input[i] == '+'))
			continue;
		if (isdigit(input[i]) == false)
			return (false);
	}
	return (true);
}

bool isFloat(std::string input)
{
	if (input[input.size() - 1] != 'f')
		return (false);
	for (unsigned long i = 0; i < input.size(); i++)
	{
		if (i == 0 && (input[i] == '-' || input[i] == '+'))
			continue;
		if (!isdigit(input[i]))
		{
			if ((input[i] == 'e') || (input[i] == 'E') || (input[i] == '.') || (input[i] == 'f'))
				continue;
			else 
				return (false);
		}
		std::cout << "input[i] = " << input[i] << std::endl;
	}
	return (true);
}