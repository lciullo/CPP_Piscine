/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:43:20 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/22 10:48:52 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* Test = new Cat();
	std::cout << "==================" << std::endl;
	std::cout << "  Subject tests   " << std::endl;
	std::cout << "==================" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << Test->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	Test->makeSound();
	j->makeSound();
	meta->makeSound();
	delete Test;
	delete j;
	delete meta;
	std::cout << "=========================" << std::endl;
	std::cout << "        My test          " << std::endl;
	int		max = 4;
	int		i;
	Animal	*animals[max];
	std::cout << BLUE << "-----CREATE DOGS-----" << RESET << std::endl;
	for (i = 0; i < max / 2; i++)
	{
		std::cout << GREEN << "Dog n•" << i << RESET << std::endl;
		animals[i] = new Dog();
	}
	std::cout << BLUE << "-----CREATE CATS-----" << RESET << std::endl;
	for (i = max / 2; i < max; i++)
	{
		std::cout << GREEN << "Cat n•" << i << RESET << std::endl;
		animals[i] = new Cat();
	}
	std::cout << BLUE << "-----ANIMALS TYPES-----" << RESET << std::endl;
	for (i = 0; i < max; i++)
	{
		std::cout << animals[i]->getType() << std::endl;
	}
	std::cout << BLUE << "----DELETED ANIMALS----" << RESET << std::endl;
	for (i = 0; i < max; i++)
	{	
		std::cout << RED << "Delete animal n•" << i << RESET << std::endl;
		delete animals[i];
	}
	std::cout << BLUE << "------FILL BRAIN-------" << RESET << std::endl;
	std::cout << GREEN << "Init Milou:" << RESET << std::endl;
	Dog	*milou = new Dog();
	milou->GetBrain()->SetIdeas("My name is Milou!", 0);
	std::cout << GREEN << "Pluto is a copy of Milou." << RESET << std::endl;
	Dog	*pluto(milou);
	std::cout << YELLOW << "Idea of Milou: " << milou->GetBrain()->GetIdeas(0) << RESET << std::endl;
	std::cout << YELLOW << "Idea of Pluto: " << pluto->GetBrain()->GetIdeas(0) << RESET << std::endl;
	delete	milou;
	std::cout << BLUE << "-------DEEP COPY-------" << RESET << std::endl;
	
	Dog	basic;
	basic.GetBrain()->SetIdeas("Test", 0);
	basic.GetBrain()->SetIdeas("un autre test", 50);
	{
		Dog	tmp = basic;
		for (int i = 0; i < 100; i++)
			std::cout << tmp.GetBrain()->GetIdeas(i) << std::endl;
	}
	return (0);
}