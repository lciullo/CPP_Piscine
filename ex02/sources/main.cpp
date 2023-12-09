/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:49:11 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/09 17:02:20 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

Base*	generate(void)
{
	srand(std::time(0));
	int	random_number = rand() % 3;

	if (random_number == 0)
		return (new A());
	else if (random_number == 1)
		return (new B());
	else
		return (new C());
}


void	identify(Base* p)
{
	if (p == NULL)
		std::cout << "NULL pointer" << std::endl;
	else if (dynamic_cast<A*>(p))
		std::cout << "A pointer" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B pointer" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C pointer" << std::endl;
	else
		std::cout << "Unknow pointer" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		static_cast<void>(dynamic_cast<A&>(p));
		std::cout << "A pointer" << std::endl;
		return;
	}
	catch (const std::exception& e) {}
	try
	{
		static_cast<void>(dynamic_cast<B&>(p));
		std::cout << "B pointer" << std::endl;
		return;
	}
	catch (const std::exception& e) {}
	try
	{
		static_cast<void>(dynamic_cast<C&>(p));
		std::cout << "C pointer" << std::endl;
		return;
	}
	catch (const std::exception& e) {}
	std::cout << "Unknow pointer" << std::endl;
}


int main(void)
{
	Base*	test = generate();

	identify(NULL);
	identify(test);
	identify(*test);
	delete test;
	return (0);
	return (0);
}