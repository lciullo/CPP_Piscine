/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 09:27:27 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/22 10:39:29 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain : default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "Think";
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

std::string const Brain::GetIdeas(const int i) 
{
	if (i < 0 || i >= 100)
		return ("Wrong index");
	return (this->_ideas[i]);
}

void	Brain::SetIdeas(std::string const &ideas, const int i) 
{
	if (i < 0 || i >= 100)
		std::cout << "Wrong index" << std::endl;
	else 
		this->_ideas[i] = ideas;
	return ;
}


Brain::~Brain(void)
{
	std::cout << "Brain : destructor called" << std::endl;
	return ;
}