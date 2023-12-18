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



void calculateExpression(std::string expression);
bool parseDigit(std::string line);
int	 getRes(std::stack<double> &expressionStack, char op);
void	calculate(double nb1, double nb2, double *res, char op);
#endif 