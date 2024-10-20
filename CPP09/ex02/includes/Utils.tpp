/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:15:30 by lciullo           #+#    #+#             */
/*   Updated: 2024/01/16 10:16:18 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

//======    Parse input           ======

template <typename T>
void isSorted (const T& container) 
{
	typename T::const_iterator it = container.begin();
	typename T::const_iterator next = it;
	next++;
	while (next != container.end()) 
	{
		if (*it > *next) 
			return ;
		it++;
		next++;
	}
	std::cout << RED << "Error: container of digit is already sorted" << RESET << std::endl;
	throw std::exception();
	return ;
}


template <typename T>
void afterSortingCheck(const T& container) 
{
	typename T::const_iterator it = container.begin();
	typename T::const_iterator next = it;
	next++;
	while (next != container.end()) 
	{
		if (*it > *next) 
		{
			std::cout << RED << "Error: container of digit is not sorted" << RESET << std::endl;
			throw std::exception();
		}
		it++;
		next++;
	}
	return ;
}

//======    Fill container         ======

template <typename T>
void fillContainer(int ac, char **av, T& container) 
{
	for (int i = 1; i < ac; i++) 
	{
		int nb = std::atoi(av[i]);
		container.push_back(nb);
	}
}

//======    Print         ======

template <typename T>
void printContainer(const T& container) 
{
	typename T::const_iterator it;
	for (it = container.begin(); it != container.end(); it++) 
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

template<typename T1, typename T2>
void printPairs(const std::vector<std::pair<T1, T2> >& pairsVector) {
	typename std::vector<std::pair<T1, T2> >::const_iterator it;
	
	for (it = pairsVector.begin(); it != pairsVector.end(); ++it) {
		std::cout << "(" << it->first << ", " << it->second << ") ";
	}
	std::cout << std::endl;
}