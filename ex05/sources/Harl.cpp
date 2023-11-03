/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:45:56 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/03 16:58:23 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Constructor was called" << std::endl;
	return ;
}

Harl::~Harl(void)
{
	std::cout << "Destructor was called" << std::endl;
	return ;
}

void Harl::complain(std::string level)
{
	void (Harl::*message[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (level.compare(array[i]) == 0)
		{
			(this->*message[i])();
			break ;
		}
	}
}

void Harl::debug(void)
{
	std::cout << "Debug message" << std::endl;
}
void Harl::info(void)
{
	std::cout << "Info message" << std::endl;
}
void Harl::warning(void)
{
	std::cout << "Warning message" << std::endl;
}
void Harl::error(void)
{
	std::cout << "Error message" << std::endl;
}