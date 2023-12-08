/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:44:28 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/08 23:09:48 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cfloat>
#include <cmath>

# define RED		"\033[31m"
# define RESET		"\033[0m"

#define INT_MIN		-2147483648
#define INT_MAX		2147483647
#define FLT_MAX     __FLT_MAX__
#define FLT_MIN     __FLT_MIN__
#define DBL_MAX     __DBL_MAX__
#define DBL_MIN     __DBL_MIN__


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

//======	           Print           ======

bool isExeceptionPrint(std::string input);
void printDouble(std::string input);
void printInt(std::string input);
void printChar(std::string input);
void printFloat(std::string input);
#endif