/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:36:36 by lciullo           #+#    #+#             */
/*   Updated: 2024/01/09 17:36:37 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

static void sortVector (int ac, char **av);
static void sortDeque(int ac, char **av);

int main(int ac, char **av)
{
	if (ac < 2) 
	{
		std::cout << RED << "Not enought parameters" << RESET << std::endl;
		return (-1);
	}
	sortVector(ac, av);
	std::cout << GREEN << "===========================================" << RESET << std::endl;
	sortDeque(ac, av);
	return (0);
}

static void sortVector (int ac, char **av)
{
	std::vector<int>	initial;
	std::vector<int>	sorted;
	if (!isValidInput(ac, av))
		return ;
	clock_t	start, finish;
	double	timeDiff;
	start = clock();
	try 
	{
		fillContainer(ac, av, initial);
		isSorted(initial);
		sorted = sort<std::vector<int>, std::vector<std::pair<int, int> > >(initial);
		std::cout << MAGENTA << "Before: " << RESET;
		printContainer(initial);
	}
	catch (std::exception& e) 
	{
		return ;
	}
	finish = clock();
	timeDiff = ((double) (finish - start)) / CLOCKS_PER_SEC;
	try 
	{
		afterSortingCheck(sorted);
	}
	catch (std::exception& e) 
	{
        return ;
    }
	std::cout << MAGENTA << "After:  " << RESET;
	printContainer(sorted);
    std::cout << MAGENTA << "[Time to process a vector of " << std::fixed << timeDiff << " us]" << RESET << std::endl;
	return ;
}

static void sortDeque(int ac, char **av)
{
	std::deque<int>	initial;
	std::deque<int>	sorted;
	if (!isValidInput(ac, av))
		return ;
	clock_t	start, finish;
	double	timeDiff;
	start = clock();
	try 
	{
		fillContainer(ac, av, initial);
		isSorted(initial);
		sorted = sort<std::deque<int>, std::deque<std::pair<int, int> > >(initial);
		std::cout << BLUE << "Before: " << RESET;
		printContainer(initial);
	}
	catch (std::exception& e) 
	{
		return ;
	}
	finish = clock();
	timeDiff = ((double) (finish - start)) / CLOCKS_PER_SEC;
	try 
	{
		afterSortingCheck(sorted);
	}
	catch (std::exception& e) 
	{
        return ;
    }
	std::cout << BLUE << "After:  " << RESET;
	printContainer(sorted);
    std::cout << BLUE << "[Time to process a deque of " << std::fixed << timeDiff << " us]" << RESET << std::endl;
	return ;
}