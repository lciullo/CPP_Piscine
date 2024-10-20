/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:45:20 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/09 15:19:56 by lisa             ###   ########.fr       */
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

ScalarConverter::~ ScalarConverter(void)
{
	std::cout << " ScalarConverter : destructor called" << std::endl;
	return ;
}

//======    Overload operator            ======

ScalarConverter & ScalarConverter::operator=(const  ScalarConverter &other)
{
	std::cout  << " ScalarConverter :assignement operator called" << std::endl;
	(void)other;
	return (*this);
}

//======	          Method             ======
	
void ScalarConverter::convert(std::string input)
{
	if (isExeceptionPrint(input))
		return ;
	else if (isChar(input))
		printChar(input);
	else if (isDouble(input))
	{
		if (!(doubleOverflow(strtod(input.c_str(), NULL))))
			return ;
		printDouble(input);	
		return ;
	}
	else if (isFloat(input))
	{
		if (!(floatOverflow(strtof(input.c_str(), NULL))))
			return ;
		printFloat(input);
		return ;	
	}
	else if (isInt(input))
	{
		if (!(intOverflow(strtol(input.c_str(), NULL, 10))))
			return ;
		printInt(input);
		return ;
	}
	else 
		std::cout << RED << "ERROR, wrong input" << RESET << std::endl;
	return ;	
}
