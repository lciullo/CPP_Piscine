/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:23:15 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/21 01:25:58 by lisa             ###   ########.fr       */
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


// 2/ Find the smallest and the largest 

void findsmallestLargest(std::vector<std::pair<int, int> > pairsVector, std::vector<int>& smallest, std::vector<int>& largest);

// 3/ Recursive sorting

template< typename T >
T	merge( T left, T right) 
{
	T result;
	size_t i = 0, j = 0;
	while (i < left.size() && j < right.size()) 
	{
		if (left[i] < right[j]) {
			result.push_back(left[i]);
			++i;
		} else {
			result.push_back(right[j]);
			++j;
		}
	}
	while (i < left.size())
	{
		result.push_back(left[i]);
		++i;
	}
	while (j < right.size()) 
	{
		result.push_back(right[j]);
		++j;
	}
	return (result);
}

template< typename T >
T	mergeSort(T vec) 
{
	if (vec.size() <= 1) 
	{
		return (vec);
	}
	size_t mid = vec.size() / 2;
	std::vector<int> left(vec.begin(), vec.begin() + mid);
	std::vector<int> right(vec.begin() + mid, vec.end());
	left = mergeSort(left);
	right = mergeSort(right);
	return (merge(left, right));
}

// 4/ Use binary-search-insertion 

template <typename T>
T binarySearchInsertion(const T &smallest, const T &largest)
{
	T result = smallest;

	for (typename T::const_iterator it = largest.begin(); it != largest.end(); ++it)
	{
		typename T::iterator pos = std::lower_bound(result.begin(), result.end(), *it);
		result.insert(pos, *it);
	}
	if (result.front() == -1)
		result.erase(result.begin());
	return (result);
}

#endif 