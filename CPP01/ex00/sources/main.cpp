/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:28:03 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/04 23:16:52 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *FirstZombie = newZombie("Rolly");
	if (!FirstZombie)
	{	 
		std::cerr << "Error, no zombie has been created" << std::endl;
		return (1);
	}
	randomChump("Holly");
	FirstZombie->announce();
	delete FirstZombie;
	return (0);
}