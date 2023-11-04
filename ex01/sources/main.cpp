/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:28:03 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/04 13:08:15 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N = 12;
	Zombie *Horde = zombieHorde(N, "Molly");
	for (int i = 0; i < N; i++)
		Horde[i].announce();
	delete [] Horde;
	return (0);
}