/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:46:24 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/13 23:54:46 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	{
		try
		{
			std::cout << "\n------- STACK FULL -------\n\n" << std::endl;
			Span stack(100);
			for(int i = 0; i < 100; i++)
				stack.addNumber(i);
			stack.addNumber(100);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "\n------- 1 ELEMENT -------\n\n" << std::endl;
		Span stack(4);
		try
		{
			stack.addNumber(1);
			std::cout << "Max span: " << stack.longestSpan() << std::endl;
			std::cout << "Min span: " << stack.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "\n------- MAX & MIN SPAN -------\n\n" << std::endl;
		Span stack(5);
		try
		{
			stack.addNumber(6);
			stack.addNumber(3);
			stack.addNumber(17);
			stack.addNumber(9);
			stack.addNumber(11);
			std::cout << "Max span: " << stack.longestSpan() << std::endl;
			std::cout << "Min span: " << stack.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "\n------- BIG STACK-------\n\n" << std::endl;
		Span stack(10042);
		std::list<int> s1;
		try
		{
			for(int i(0); i < 10042; i++)
				s1.push_back(i);
			stack.addNumber(s1.begin(), s1.end());
			std::cout << "Max span: " << stack.longestSpan() << std::endl;
			std::cout << "Min span: " << stack.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return (0);
}