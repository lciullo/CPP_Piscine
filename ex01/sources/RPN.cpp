/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:36:03 by lciullo           #+#    #+#             */
/*   Updated: 2024/01/10 17:34:55 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void calculateExpression(std::string expression)
{
	std::stack<double> expressionStack;
	std::istringstream iss(expression);
	std::string token;
	while (getline(iss, token, ' '))
	{
		if (token == "+" || token == "-" || token == "/" || token == "*")
			expressionStack.push(getRes(expressionStack, token[0]));
		else
		{
			for (int i = 0; token[i]; i++)
			{
				if (!parseDigit(token, token[i], expressionStack))
					return ;
			}
		}
	}
	if (expressionStack.size() > 1)
		throw(std::runtime_error("Error: too low operator"));
	std::cout << expressionStack.top() << std::endl;
	return ;
}

int		getRes(std::stack<double> &expressionStack, char op) 
{
	double nb1;
	double nb2;
	double res = 0;

	if (expressionStack.size() < 2)
		throw(std::runtime_error("Error: too much operator"));
	nb1 = expressionStack.top();
	expressionStack.pop();
	nb2 = expressionStack.top();
	expressionStack.pop();
	calculate(nb1, nb2, &res, op);
	return (res);
}

bool parseDigit(std::string token, char digit, std::stack<double> &expressionStack)
{
	if (!isdigit(digit))
	{
		std::cerr << RED << "Error '" << digit << "' is not a digit." << RESET << std::endl;
		return (false);
	}
	expressionStack.push(std::strtol(token.c_str(), NULL, 10));
	if (expressionStack.top() > 9)
	{
		std::cerr << RED << "Error digit is greater than 10" << RESET << std::endl;
		return (false);
	}
	return (true);
}

void	calculate(double nb1, double nb2, double *res, char op)
{
	switch(op) 
	{
		case '*': 
		{
			*res = nb2 * nb1;
			if (*res < INT_MIN || *res > INT_MAX)
				throw(std::runtime_error("Error: overflow"));
			break ;
		}
		case '/':
		 {
			if (nb1 == 0)
				throw(std::runtime_error("Error: no division by 0"));
			if (nb2 == 0)
				return ;
			*res = nb2 / nb1;
			if (*res < INT_MIN || *res > INT_MAX)
				throw(std::runtime_error("Error: overflow"));
			break ;
		}
		case '+': 
		{
			*res = nb2 + nb1;
			if (*res < INT_MIN || *res > INT_MAX)
				throw(std::runtime_error("Error: overflow"));
			break ;
		}
		case '-': 
		{
			*res = nb2 - nb1;
			if (*res < INT_MIN || *res > INT_MAX)
				throw(std::runtime_error("Error: overflow"));
			break ;
		}
	}
}



