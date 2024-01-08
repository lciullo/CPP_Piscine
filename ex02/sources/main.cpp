/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:23:36 by lciullo           #+#    #+#             */
/*   Updated: 2024/01/08 13:47:33 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (!isValidInput(ac, av))
		return (1);
	std::vector<int>	first;
	std::vector<int>	vec;
	fillContainer(ac, av, first);
	if (isSorted(first))
		return (1);
	vec = sortVector<std::vector<int>, std::vector<std::pair<int, int> > >(first);
	printContainer(vec);
	return (0);
}
