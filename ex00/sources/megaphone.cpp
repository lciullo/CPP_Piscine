/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:30:39 by lciullo           #+#    #+#             */
/*   Updated: 2023/10/17 12:46:11 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale> 
using namespace std;

int	main(int ac, char **av)
{
	char	letter;
	if (ac == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"  << endl;
	if (ac > 1)
	{
		for(int i = 1; i != ac; i++)
		{
			for (int j = 0; av[i][j]; j++)
			{
				letter = av[i][j];
				if (letter >= 97 && letter <= 122)
					letter -= 32;
				std::cout << letter;
			}
			std::cout << ' ';
		}	
	}
	std::cout << std::endl;
	return (0);
}