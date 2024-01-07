/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:23:36 by lciullo           #+#    #+#             */
/*   Updated: 2024/01/06 15:12:48 by lisa             ###   ########.fr       */
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
	
	SortingVector(first);
	return (0);
}

int	createJacob(int n)
{
	int	prev = 1;
	int	next = 1;
	int	i;
	std::vector< int >	v;

	v.push_back(1);
	while (next < n) {
		i = next;
		while (i > prev) {
			v.push_back(i);
			i--;
		}
		prev = next;
		next += 2 * i;
	}
	i = n;
	while (i > prev) {
		v.push_back(i);
		i--;
	}
	return (v.size());
}


std::vector<int> SortingVector(std::vector<int>	first)
{
	std::cout << "Before : ";
	printContainer(first);
	std::vector<std::pair<int, int> > pairsVector = splitAndPair(first);
	//int size = createJacob(pairsVector.size());
	std::vector<int> smallest;
	std::vector<int> largest;
	std::vector<int> sortedDigit;
	findSmallestLargest(pairsVector, smallest, largest);
	smallest = mergeSort(smallest);
	largest = mergeSort(largest);
	sortedDigit = binarySearchInsertion(largest, smallest);
	std::cout << "After : ";
 	printContainer(sortedDigit);
	return (sortedDigit);
}