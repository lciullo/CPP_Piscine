/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:43:20 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/21 14:29:46 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* beta = new WrongAnimal();
	const WrongAnimal* Wrong = new WrongCat();
	const WrongAnimal* WCat = new WrongCat();

	std::cout << "==================" << std::endl;
	std::cout << "  Subject tests   " << std::endl;
	std::cout << "================== " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	delete i;
	delete j;
	delete meta;
	std::cout << "==================" << std::endl;
	std::cout << "      My tests     " << std::endl;
	std::cout << "==================" << std::endl;
	std::cout << Wrong->getType() << " " << std::endl;
	std::cout << WCat->getType() << " " << std::endl;
	std::cout << beta->getType() << " " << std::endl;
	Wrong->makeSound();
	WCat->makeSound();
	beta->makeSound();
	delete beta;
	delete Wrong;
	delete WCat;
	return (0);
}