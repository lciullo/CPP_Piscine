/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:41:36 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/12 12:55:03 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


template <typename T>
void printArray(Array<T> &a)
{
	std::cout << "[";
    for (unsigned int i = 0; i < a.size(); i++)
    {
        if (i != a.size() - 1)
            std::cout << a[i] << ", ";
        else
            std::cout << a[i];
    }
    std::cout << "]" << std::endl;
}

int main(void) 
{
	{
		std::cout << MAGENTA << "Empty array : " << RESET << std::endl;
		Array<int> empty;
		std::cout << "Empty: ";
		printArray(empty);
	}
	std::cout << "=======================================" << std::endl;
	{
		std::cout << MAGENTA << "String array : " << RESET << std::endl;
		Array<std::string> a(10);
		for (int i(0); i < 10; i++)
			a[i] = "Christmas";
		std::cout << "String : ";
		printArray(a);
	}
	std::cout << "=======================================" << std::endl;
	{
		std::cout << MAGENTA << "Copy assignement array : " << RESET << std::endl;
		Array<std::string> a(10);
		for (int i(0); i < 10; i++)
			a[i] = "Test a";
		Array<std::string> b(a);
		b[5] = "Test b";
		Array<std::string> c = b;
		c[6] = "Test c";
		std::cout << "String a: ";
		printArray(a);
		std::cout << "String b: ";
		printArray(b);
		std::cout << "String c: ";
		printArray(c);
	}
	std::cout << "=======================================" << std::endl;
	{
		std::cout << MAGENTA << "Exception : " << RESET	 << std::endl;
		try
		{
			Array<std::string> a(10);
			for (int i(0); i < 11; i++)
				a[i] = "Test a";
			std::cout << "String: ";
			printArray(a);
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}
	return (0);
}
