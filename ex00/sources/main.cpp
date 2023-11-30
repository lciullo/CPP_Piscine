/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:17:51 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/30 18:20:01 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{ 
		Bureaucrat John("John", 159);
		John.GetGrade();
		John.DecreaseGrade();
		std::cout << "Try something" << std::endl;
	}
	catch (const std::exception& e)
	{
		
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	return (0);
}