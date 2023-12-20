/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:23:36 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/20 20:17:24 by lisa             ###   ########.fr       */
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

std::vector<int> SortingVector(std::vector<int>	first)
{
	
	std::vector<std::pair<int, int> > pairsVector = splitAndPair(first);
	std::vector<int>smalest;
	std::vector<int>largest;
	for (std::size_t i = 0; i < pairsVector.size(); ++i) 
	{
        std::cout << "Pair " << i + 1 << ": (" << pairsVector[i].first << ", " << pairsVector[i].second << ")" << std::endl;
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
	printContainer(largest);
	printContainer(smalest);
	return (first);
}