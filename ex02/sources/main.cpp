/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:23:36 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/20 17:51:11 by lisa             ###   ########.fr       */
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
	for (std::size_t i = 0; i < pairsVector.size(); ++i) 
	{
        std::cout << "Pair " << i + 1 << ": (" << pairsVector[i].first << ", " << pairsVector[i].second << ")" << std::endl;
    }
	return (first);
}