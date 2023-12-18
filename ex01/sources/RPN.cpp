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
			if (parseDigit(token))
				expressionStack.push(std::strtol(token.c_str(), NULL, 10));
			else
				return ;
		}
	}
	if (expressionStack.size() > 1)
		throw(std::runtime_error("Error size > 1"));
	std::cout << expressionStack.top() << std::endl;
	return ;
}

void	calculate(double nb1, double nb2, double *res, char op)
{
	switch(op) 
	{
		case '*': 
		{
			*res = nb2 * nb1;
			if (*res > 2147483647 || *res < -2147483648)
				throw(std::runtime_error("Error: overflow"));
			break ;
		}
		case '/':
		 {
			if (nb2 == 0)
				throw(std::runtime_error("Error: division by 0"));
			if (nb1 == 0)
				return ;
			*res = nb2 / nb1;
			if (*res > 2147483647 || *res < -2147483648)
				throw(std::runtime_error("Error: overflow"));
			break ;
		}
		case '+': 
		{
			*res = nb2 + nb1;
			if (*res > 2147483647 || *res < -2147483648)
				throw(std::runtime_error("Error: overflow"));
			break ;
		}
		case '-': 
		{
			*res = nb2 - nb1;
			if (*res > 2147483647 || *res < -2147483648)
				throw(std::runtime_error("Error: overflow"));
			break ;
		}
	}
}

int		getRes(std::stack<double> &expressionStack, char op) 
{
	double nb1;
	double nb2;
	double res = 0;

	if (expressionStack.size() < 2)
		throw(std::runtime_error("Error: size < 2"));
	nb1 = expressionStack.top();
	expressionStack.pop();
	nb2 = expressionStack.top();
	expressionStack.pop();
	calculate(nb1, nb2, &res, op);
	return (res);
}


bool parseDigit(std::string token)
{
	double nb = 0;
	for (int i = 0; token[i]; i++)
	{
		if (!isdigit(token[i]))
		{
			std::cerr << RED << "Error '" << token[i] << "' is not a digit." << RESET << std::endl;
			return (false);
		}
	}
	nb = std::strtol(token.c_str(), NULL, 10);
	if (nb > 9)
	{
		std::cerr << RED << "Error digit is greater than 10" << RESET << std::endl;
		return (false);
	}
	return (true);
}