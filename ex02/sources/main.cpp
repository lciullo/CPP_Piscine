/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:43:20 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/21 13:06:59 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "==================" << std::endl;
	std::cout << "  Subject tests   " << std::endl;
	std::cout << "==================" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete i;
	delete j;
	delete meta;
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
	return (0);
}