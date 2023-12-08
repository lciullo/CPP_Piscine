/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:44:28 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/08 15:55:09 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <limits>
#include <cfloat>
#include <cmath>

# define RED		"\033[31m"
# define RESET		"\033[0m"

class ScalarConverter
{
	public	:	
				//======	          Method             ======
				static void convert(std::string input);
	private : 	
				//======    Constructors / Destructors   ======
				ScalarConverter(void);
				ScalarConverter(const ScalarConverter &other);
				ScalarConverter &operator=(const ScalarConverter &other);
				~ScalarConverter(void);
};

//======	          Type check          ======

bool isInt(std::string input);
bool isFloat(std::string input);
bool countFloatFormat(std::string input);
bool isDouble(std::string input);
bool isChar(std::string input);


//======	           Overflow            ======

bool intOverflow(long input);
bool floatOverflow(float input);
bool doubleOverflow(double input);

//======	           Conversion           ======

#endif