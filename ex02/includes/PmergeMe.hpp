/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:23:15 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/20 23:29:10 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

# define RESET		"\033[0m"
# define BLACK		"\033[30m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"
# define CYAN		"\033[36m"
# define WHITE		"\033[37m"

#define INT_MIN -2147483648
#define INT_MAX 2147483647

#include <iostream>
#include <cstdlib>
#include <cctype>
#include <cstdlib> 
#include <list>
#include <vector>
#include <algorithm>

//======    Parse input           ======

bool isValidInput(int ac, char **av);

bool checkEachArg(const char *input);

template <typename T>
bool isSorted(const T& container) 
{
	typename T::const_iterator it = container.begin();
	typename T::const_iterator next = it;
	next++;
	while (next != container.end()) 
	{
		if (*it > *next) 
			return (false);
		it++;
		next++;
	}
	std::cout << RED << "List of digit is already sorted" << RESET << std::endl;
	return (true);
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

//======    Vector sorting  ======

std::vector<int> SortingVector(std::vector<int>	first);


//======    Vector sorting  ======

//==========================================================================================
//                                 FORD-JOHNSON ALGORITHM                                 
//==========================================================================================

// 1/ Split in pairs of two the list of digit 

template <typename T>
std::vector<std::pair<int, int> > splitAndPair(const T& container) 
{
	std::vector<std::pair<int, int> > pairsVector;
	size_t nbPairs = container.size();

	if (nbPairs % 2 == 0)
		nbPairs /=  2;
	else
		nbPairs = ((nbPairs - 1 ) / 2);
	for (size_t i = 0; i < nbPairs; i++) 
	{
		pairsVector.push_back(std::make_pair(container[i * 2], container[i * 2 + 1]));
	}
	if (container.size() % 2 != 0)
		pairsVector.push_back(std::make_pair(container.back(), -1));
	return (pairsVector);
}


// 2/ Find the smalest and the largest 

void findSmalestLargest(std::vector<std::pair<int, int> > pairsVector, std::vector<int>& smalest, std::vector<int>& largest);


// 3/ Recursive sorting

std::vector<int> merge(const std::vector<int>& left, const std::vector<int>& right); 
std::vector<int> mergeSort(const std::vector<int>& vec); 


#endif 