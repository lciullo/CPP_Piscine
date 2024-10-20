/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:17:51 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/04 18:44:18 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void )
{
	std::cout << "Grade too High" << std::endl;
	try
	{
		Bureaucrat Molly("Molly", 0);
		std::cout << Molly << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "================================" << std::endl;
	std::cout << "Grade too low" << std::endl;
	try
	{
		Bureaucrat Jim("Jim", 151);
		std::cout << Jim << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "================================" << std::endl;
	std::cout << "Increase Grade" << std::endl;
	try 
	{
		Bureaucrat Steve("Steve", 3);
		std::cout << Steve << std::endl;
		Steve.IncreaseGrade();
		std::cout << Steve << std::endl;
		Steve.IncreaseGrade();
		std::cout << Steve << std::endl;
		Steve.IncreaseGrade();
		std::cout << Steve << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "================================" << std::endl;
	std::cout << "Decrease Grade" << std::endl;
	try 
	{
		Bureaucrat Bob("Bob", 149);
		std::cout << Bob << std::endl;
		Bob.DecreaseGrade();
		std::cout << Bob << std::endl;
		Bob.DecreaseGrade();
		std::cout << Bob << std::endl;
		Bob.DecreaseGrade();
		std::cout << Bob << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}