/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:23:36 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/20 15:55:01 by lisa             ###   ########.fr       */
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
	return (0);
}