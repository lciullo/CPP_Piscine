/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:28:03 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/04 23:17:24 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N = 12;
	Zombie *Horde = zombieHorde(N, "Molly");
	if (!Horde)
	{	 
		std::cerr << "Error, no zombie has been created" << std::endl;
		return (1);
	}
	for (int i = 0; i < N; i++)
		Horde[i].announce();
	delete [] Horde;
	return (0);
}