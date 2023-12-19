/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:10:13 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/19 11:10:15 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << RED << "Error, wrong number of aguments" << RESET << std::endl;
		std::cout << GREEN << "Valid input : ./btc file" << RESET << std::endl;
		return (1);
	}
	try 
	{
		BitcoinExchange bitcoin;
		bitcoin.fillMap();
		bitcoin.parseInfile(av[1]);
	}
	catch (std::exception &e)
	{
			
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}