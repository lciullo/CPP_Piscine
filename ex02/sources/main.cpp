/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:23:36 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/21 01:26:54 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	std::vector<int>	first;
	if (!isValidInput(ac, av))
		return (1);
	fillContainer(ac, av, first);
	if (isSorted(first))
		return (1);
	std::cout << "Before : ";
	printContainer(first);
	SortingVector(first);
	return (0);
}

std::vector<int> SortingVector(std::vector<int>	first)
{
	
	std::vector<std::pair<int, int> > pairsVector = splitAndPair(first);
	std::vector<int> smallest;
	std::vector<int> largest;
	std::vector<int> sortedDigit;
	findsmallestLargest(pairsVector, smallest, largest);
	smallest = mergeSort(smallest);
	largest = mergeSort(largest);
	sortedDigit = binarySearchInsertion(largest, smallest);
	std::cout << "After : ";
 	printContainer(sortedDigit);
	return (sortedDigit);
}