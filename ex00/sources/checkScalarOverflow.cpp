/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkScalarOverflow.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 12:06:04 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/08 22:18:07 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool intOverflow(long input)
{
	if (input >= INT_MAX && input <= INT_MIN)
	{
		std::cout << RED << "Error : int overflow " << RESET << std::endl;
		return (false);
	}
	return (true);
}

bool floatOverflow(float input)
{
	if (input >= FLT_MAX && input <= FLT_MIN)
	{
		std::cout  << RED << "Error : float overflow " << RESET << std::endl;
		return (false);
	}
	return (true);
}

bool doubleOverflow(double input)
{
	if (input >= DBL_MAX && input <= DBL_MIN)
	{
		std::cout << RED << "Error : double overflow " << RESET << std::endl;
		return (false);
	}
	return (true);
}
