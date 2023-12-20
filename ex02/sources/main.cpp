/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:23:36 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/20 23:36:27 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	std::vector<int>	first;
	std::vector<int>    sortedFirst;
	if (!isValidInput(ac, av))
		return (1);
	fillContainer(ac, av, first);
	if (isSorted(first))
		return (1);
	std::cout << "Before : ";
	printContainer(first);
	sortedFirst = SortingVector(first);
	return (0);
}

// 2/ Find the smalest and the largest 

void findSmalestLargest(std::vector<std::pair<int, int> > pairsVector, std::vector<int>& smalest, std::vector<int>& largest)
{
	for (std::size_t i = 0; i < pairsVector.size(); ++i) 
	{
		int firstNb = pairsVector[i].first;
		int secondNb = pairsVector[i].second;
		if (pairsVector[i].first > pairsVector[i].second)
		{
			largest.push_back(firstNb);
			smalest.push_back(secondNb);
		}
		else
		{
			largest.push_back(secondNb);
			smalest.push_back(firstNb);
		}	
	}
	
	return ;
}

// 3/ Recursive sorting

std::vector<int> merge(const std::vector<int>& left, const std::vector<int>& right) 
{
	std::vector<int> result;
	size_t i = 0, j = 0;
	while (i < left.size() && j < right.size()) 
	{
		/// ordre croissant ou décroissant > = décroissant < = croissant
		if (left[i] > right[j]) {
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
	return result;
}


std::vector<int> mergeSort(const std::vector<int>& vec) 
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


std::vector<int> SortingVector(std::vector<int>	first)
{
	
	std::vector<std::pair<int, int> > pairsVector = splitAndPair(first);
	std::vector<int> smalest;
	std::vector<int> largest;
	findSmalestLargest(pairsVector, smalest, largest);
	smalest = mergeSort(smalest);
	largest = mergeSort(largest);
	printContainer(largest);
	printContainer(smalest);
	return (first);
}