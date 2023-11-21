/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 09:27:27 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/21 11:08:13 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain : default constructor called" << std::endl;
	return ;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain : copy constructor called" << std::endl;
	*this = other;
	return ;
}


Brain &Brain::operator=(const Brain &other)
{
	std::cout << "Brain : assignment operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = other._ideas[i];
		
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain : destructor called" << std::endl;
	return ;
}