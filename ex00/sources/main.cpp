/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:17:51 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/29 16:22:26 by lciullo          ###   ########.fr       */
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