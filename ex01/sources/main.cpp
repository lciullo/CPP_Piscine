/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:17:51 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/30 13:08:11 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
int main(void)
{
	try
	{ 
		Bureaucrat John("John", 159);
		John.GetGrade();
		John.DecreaseGrade();
	}
	catch (const std::exception& e)
	{
		
		std::cerr << "Bureaucrat : Exception caught " << e.what() << std::endl;
	}
	return (0);
}