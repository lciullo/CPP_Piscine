/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:45:20 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/08 15:13:49 by lciullo          ###   ########.fr       */
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
	/*std::cout << "Is float return : " << isFloat(input) << std::endl;
	std::cout << "Is double return : " << isDouble(input) << std::endl;
	std::cout << "Is int return : " << isInt(input) << std::endl;
	std::cout << "Is char return : " << isChar(input) << std::endl;*/
	
void ScalarConverter::convert(std::string input)
{
	if (isDouble(input))
	{
		if (!(doubleOverflow(strtod(input.c_str(), NULL))))
			return ;
	}
	if (isFloat(input))
	{
		if (!(floatOverflow(strtof(input.c_str(), NULL))))
			return ;	
	}
	if (isInt(input))
	{
		if (!(intOverflow(strtol(input.c_str(), NULL, 10))))
			return ;
	}
	if (isChar(input))
		std::cout << "print char with simple quote" << std::endl;
}
