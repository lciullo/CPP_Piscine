/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:35:51 by lciullo           #+#    #+#             */
/*   Updated: 2024/01/09 17:35:52 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <stdlib.h>
#include <stack>

# define RESET		"\033[0m"
# define BLACK		"\033[30m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"
# define CYAN		"\033[36m"
# define WHITE		"\033[37m"

# define INT_MIN	-2147483648
# define INT_MAX	2147483647


void calculateExpression(std::string expression);

int	 getRes(std::stack<double> &expressionStack, char op);

bool parseDigit(std::string token, char digit, std::stack<double> &expressionStack);

void	calculate(double nb1, double nb2, double *res, char op);

#endif 