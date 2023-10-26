/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:30:39 by lciullo           #+#    #+#             */
/*   Updated: 2023/10/26 15:27:12 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	char	letter;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	if (ac > 1)
	{
		for (int row = 1; row != ac; row++)
		{
			for (int i = 0; av[row][i]; i++)
			{
				letter = av[row][i];
				if (letter >= 97 && letter <= 122)
					letter = std::toupper(av[row][i]);	
				std::cout << letter;
			}
		}	
	}
	std::cout << std::endl;
	return (0);
}