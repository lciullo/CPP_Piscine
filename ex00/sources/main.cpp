/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:28:03 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/02 10:42:53 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *FirstZombie = newZombie("Rolly");
	randomChump("Holly");
	FirstZombie->announce();
	delete FirstZombie;
	return (0);
}