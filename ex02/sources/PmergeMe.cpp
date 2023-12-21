/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:23:24 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/21 01:21:42 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PmergeMe.hpp"

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
		if (!checkEachArg(av[i]))
			return (false);
	}  
	return (true);
}

bool checkEachArg(const char *input)
{
	long nb = strtol(input, NULL, 10);
	if (nb < INT_MIN || nb > INT_MAX)
	{
		std::cout << RED << "Error : number : " << input << " overflow." << RESET << std::endl;
		return (false);
	}
	else if (nb < 0)
	{
		std::cout << RED << "Error : number : " << input << " is negative." << RESET << std::endl;
		return (false);
	}
	for (int i = 0; i < input[i]; i++)
	{
		if (!isdigit(input[i]))
		{
			std::cout << RED << "Error : " << input << " isn't only numeric argument." << RESET << std::endl;	
			return (false);
		}
	}
	return (true);
}

// ==== Sort ====

void findsmallestLargest(std::vector<std::pair<int, int> > pairsVector, std::vector<int>& smallest, std::vector<int>& largest)
{
	for (std::size_t i = 0; i < pairsVector.size(); ++i) 
	{
		int firstNb = pairsVector[i].first;
		int secondNb = pairsVector[i].second;
		if (pairsVector[i].first > pairsVector[i].second)
		{
			largest.push_back(firstNb);
			smallest.push_back(secondNb);
		}
		else
		{
			largest.push_back(secondNb);
			smallest.push_back(firstNb);
		}	
	}
	
	return ;
}
