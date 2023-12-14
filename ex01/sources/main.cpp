/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:46:24 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/14 14:18:12 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	{
		std::cout << "Subject test" << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << "=========================" << std::endl;
		
	}
	std::cout << "My test" << std::endl;
	std::cout << "=========================" << std::endl;
	std::cout << "Add numbers : " << std::endl;
	{
		Span stack(10042);
		std::vector<int> s1;
		for(int i(0); i < 10042; i++)
				s1.push_back(i);
		stack.addNumbers(s1.begin(), s1.end());
		std::cout << stack.longestSpan() << std::endl;
		std::cout << stack.shortestSpan() << std::endl;

	}
	std::cout << "=========================" << std::endl;
	std::cout << "Too few arguments : " << std::endl;
	{
		try 
		{
			Span sp = Span(5);
			sp.addNumber(1);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			
			std::cerr << e.what() << std::endl;
		}
		
	}
	std::cout << "=========================" << std::endl;
	std::cout << "Too many arguments : " << std::endl;
	{
		try 
		{
			
			Span sp = Span(2);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}