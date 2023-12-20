/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:23:24 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/20 12:34:59 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PmergeMe.hpp"

//======    Attribute             ======	
//======    Constructor           ======
//======    Destructor            ======
//======    Overload operator     ======
//======    Method                ======
//======    Exception             ======

//======    Parse input           ======

bool isValidInput(int ac, char **av)
{
	if (ac < 3)
	{
		std::cout << RED << "Error : number of arguments is too less, add at least 2 arguments." << RESET << std::endl;
		return (false);
	}  
	if (ac > 3001)
	{
		std::cout << RED << "Error : number of arguments too high, put at up 3000 arguments." << RESET << std::endl;
		return (false);
	}
	for (int i = 1; i < ac; i++)
	{
		long nb = strtol(av[i], NULL, 10);
		if (nb < INT_MIN || nb > INT_MAX)
		{
			std::cout << RED << "Error : number : " << av[i] << " overflow" << RESET << std::endl;
			return (false);
		}
		else if (nb < 0)
		{
			std::cout << RED << "Error : number : " << av[i] << " is negative" << RESET << std::endl;
			return (false);
		}
	}    
	return (true);
}
