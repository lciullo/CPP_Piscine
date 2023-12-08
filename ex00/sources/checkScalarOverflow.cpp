/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkScalarOverflow.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 12:06:04 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/08 16:07:05 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool intOverflow(long input)
{
	if (input >= std::numeric_limits<int>::max() || input <= std::numeric_limits<int>::min())
	{
		std::cout << RED << "Error : int overflow " << RESET << std::endl;
		return (false);
	}
	return (true);
}

bool floatOverflow(float input)
{
	if (input >= std::numeric_limits<float>::max() || input <= std::numeric_limits<float>::min())
	{
		std::cout  << RED << "Error : float overflow " << RESET << std::endl;
		return (false);
	}
	return (true);
}

bool doubleOverflow(double input)
{
	if (input >= std::numeric_limits<double>::max() || input <= std::numeric_limits<double>::min())
	{
		std::cout << RED << "Error : double overflow " << RESET << std::endl;
		return (false);
	}
	return (true);
}
