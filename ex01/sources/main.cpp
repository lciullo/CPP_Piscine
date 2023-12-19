/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:09:21 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/19 11:09:23 by lciullo          ###   ########.fr       */
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