/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:43:20 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/22 12:56:15 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "==================" << std::endl;
	std::cout << "  Subject tests   " << std::endl;
	std::cout << "==================" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	delete i;
	delete j;
	std::cout << "==================" << std::endl;
	std::cout << "     My tests     " << std::endl;
	std::cout << "==================" << std::endl;
	Animal *Array[8];
	for (int i = 0; i < 4; i++)
		Array[i] = new Cat();
	for (int i = 4; i < 8; i++)
		Array[i] = new Dog();
	for (int i = 0; i < 8; i++)
		delete Array[i];
	std::cout << "---- MILOU --------" << std::endl;
	Dog	milou;
	milou.makeSound();
	std::cout << "---- GARFIELD -----"  << std::endl;
	Cat	garfield;
	garfield.makeSound();
	std::cout << "---- DESTRUCTORS --" << std::endl;
	return (0);
}