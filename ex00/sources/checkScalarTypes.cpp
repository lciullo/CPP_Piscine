/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkScalarTypes.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:56:40 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/08 11:41:21 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool isInt(std::string input)
{
	if (input.size() == 0)
		return (false);
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
	if (input[0] == 'f' && input.size() == 1)
		return (false);
	for (unsigned long i = 0; i < input.size(); i++)
	{
		if (i == 0 && (input[i] == '-' || input[i] == '+'))
			continue;
		if (!isdigit(input[i]))
		{
			if ((input[i] == '.') || (input[i] == 'f'))
				continue;
			else 
				return (false);
		}
	}
	if (countFloatFormat(input) == false)
		return (false);
	return (true);
}

bool countFloatFormat(std::string input)
{
	unsigned long 	dot = 0;
	unsigned long	f = 0;
	unsigned long 	sign = 0;

	for (unsigned long i = 0; i < input.size(); i++)
	{
		if ((input[i] == '-' || input[i] == '+'))
			sign++;
		if (input[i] == '.')
			dot++;
		if (input[i] == 'f')
			f++;
	}
	if ((f != 1) || (sign > 1) || (dot > 1))
		return (false);
	return (true);
}

bool isDouble(std::string input)
{
	int sign  = 0;
	
	if (input.size() == 0)
		return (false);
	for (unsigned long i = 0; i < input.size(); i++)
	{
		if (i == 0 && (input[i] == '-' || input[i] == '+'))
		{
			sign++;
			continue;
		}
		if (!isdigit(input[i]))
				return (false);
	}
	if (sign > 1)
		return (false);
	return (true);
}

bool isChar(std::string input)
{
	if (input.size() == 1 && (isprint(input[0]) && !isdigit(input[0])))
		return (true);
	return (false);
}