/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:35:56 by lciullo           #+#    #+#             */
/*   Updated: 2024/01/12 13:15:42 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << RED << "Error, wrong number of aguments" << RESET << std::endl;
		std::cout << GREEN << "Please add only one argument" << RESET << std::endl;
		return (1);
	}
	if (av[1][0] == '\0')
	{
		std::cout << RED << "Error, don't put empty argument" << RESET << std::endl;
		return (1);
	}
	try 
	{
		calculateExpression(av[1]);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}