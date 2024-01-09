/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:23:15 by lciullo           #+#    #+#             */
/*   Updated: 2024/01/09 13:11:13 by lciullo          ###   ########.fr       */
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
#include <cmath>

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


template<typename T1, typename T2>
void printPairs(const std::vector<std::pair<T1, T2> >& pairsVector) {
	typename std::vector<std::pair<T1, T2> >::const_iterator it;
	
	for (it = pairsVector.begin(); it != pairsVector.end(); ++it) {
		std::cout << "(" << it->first << ", " << it->second << ") ";
	}
	std::cout << std::endl;
}

//======    Vector sorting  ======

std::vector<int> SortingVector(std::vector<int>	first);

//==========================================================================================
//                                 FORD-JOHNSON ALGORITHM                                 
//==========================================================================================

// Split in pairs

template <typename T, typename P>
P splitAndPair(T& container) 
{
	P pairsVector;
	int len = container.size();
	int i = 0;
	if (len % 2 == 0)
		;
	else
		len = len - 1;
	while (i < len) 
	{
		if (container[i] > container[i + 1])
			pairsVector.push_back(std::make_pair(container[i], container[i + 1]));
		else
			pairsVector.push_back(std::make_pair(container[i + 1], container[i]));
		i += 2;
	}
	if (container.size() % 2 == 1)
		pairsVector.push_back(std::make_pair(container.back(), -1));
	return (pairsVector);
}

// Recursively sort largest list in ascending order 

template <typename P>
void    splitContainer(P& container1, P& container2, P& container3)
{
	typename    P::iterator it;
	int                     i = 0;
	int                     len = container1.size();

	for (it = container1.begin(); it != container1.end(); ++it)
	{
		if (i < len / 2)
			container2.push_back(*it);
		else
			container3.push_back(*it);
		i++;
	}
}


template <typename P>
P   Merge(P& container)
{
	P   ret;
	P   container1;
	P   container2;

	splitContainer(container, container1, container2);
	if (!(container1.size() < 2 && container2.size() < 2)) 
	{
		container1 = Merge(container1);
		container2 = Merge(container2);
	}
   	std::merge(container1.begin(), container1.end(), container2.begin(), container2.end(), std::back_inserter(ret));
	return (ret);
}

// Make a container with the largest and smallest 

template <typename T, typename P>
void    getSmallestLargest(P& pair, T& largest, T& smallest)
{
	typename P::iterator    it;

	for (it = pair.begin(); it != pair.end(); ++it) 
	{
		largest.push_back(it->first);
		smallest.push_back(it->second);
	}
	return ;
}
// get suite 

int generateSequenceTerm(int n, int prev);


template <typename T>
T sizeOfGroups(T& smallest)
{
	T		res;
	
	size_t	n = 0;
	int		nb = 2;
	int		prev = 0;
	size_t	check = 0;
	size_t	len = smallest.size();
	while (n < len)
	{
		prev = nb;
		nb = 0;
		nb = generateSequenceTerm(n, prev);
		while (check + nb > len)
			nb--;
		res.push_back(nb);
		check += nb;
		n++;
		if (check >= len)
			break ;
	}
	return (res);
}
//456 7897 31 34 87 8 678 3 167 1 03 468 86 41 68778 3648 5 68 7 52 778 5559 45 78 348 0 6484

template <typename T>
T getIndexContainer(T& smallest, T& suite)
{
	T res;
	res = smallest;
	int size = 0;
	int index = 0;
	int check = 0;
	int i = 0;
	typename T::iterator it;
	for (it = suite.begin(); it != suite.end(); it++)
	{
		check = *it;
		for (size = 0; size < check; size++)
		{
			res[index + size] = index + suite[i] - size - 1;
		}
		i++;
		index += size; 
	}
	return (res);
}

template <typename T>
void insertSmallestInLargest(const T& smallest, T& largest, T& index) 
{
	for (int i = 0; i < static_cast<int>(index.size()); ++i) {
		if (index[i] < static_cast<int>(largest.size())) 
		{
			typename T::iterator it = std::lower_bound(largest.begin(), largest.end(), smallest[i]);
			largest.insert(it, smallest[i]);
		}
	}
}


template <typename T, typename P>
T   sortVector(T& first)
{
	P contPair;
	T largest;
	T smallest;
	T suite;
	T index;
	
	contPair = splitAndPair< T, P >(first);
	contPair = Merge< P >(contPair);
	getSmallestLargest<T, P>(contPair, largest, smallest);
	largest.insert(largest.begin(), smallest[0]);
	if (!smallest.empty()) 
		smallest.erase(smallest.begin());
	suite = sizeOfGroups< T>(smallest);
	index = getIndexContainer(smallest, suite);
	insertSmallestInLargest(smallest, largest, index);
	return (largest);
}

#endif 