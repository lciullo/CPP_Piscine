/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:46:08 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/14 14:18:37 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

//======    Constructors / Destructors    ======

Span::Span()
{
	this->_N = 0;
}

Span::Span(unsigned int N)
{
	this->_N = N;
}

Span::Span(const Span &obj)
{
	*this = obj;
}

Span::~Span(void)
{

}

//======	          Overload Operator             ======

Span &Span::operator=(const Span &obj)
{
	if (this != &obj)
	{
		
	}
	return (*this);
}

//======	           Methods             ======

void	Span::addNumber(int number)
{
	if (this->_array.size() >= this->_N)
		throw tooManyInput();
	this->_array.push_back(number);
	return ;
}

void    Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	while (begin != end)
	{
		this->_array.push_back(*begin);
		if (this->_array.size() > this->_N)
			throw tooManyInput();
		++begin;
	}
}

int	Span::shortestSpan()
{
	if (this->_array.size() <= 1) 
		throw tooFewInput();
	std::vector<int> copy;
	copy = this->_array;
	std::sort(copy.begin(), copy.end());
	int min = copy[1] - copy[0];
	for (size_t i = 1; i < copy.size(); ++i) 
	{
		int compare = copy[i] - copy[i - 1];
		if (compare < min) 
		{
			min = compare;
		}
	}
	return (min);
}

int Span::longestSpan()
{
	if (this->_array.size() <= 1)
		throw tooFewInput();
	int	max = *std::max_element(this->_array.begin(), this->_array.end());
	int	min = *std::min_element(this->_array.begin(), this->_array.end());
	return (max - min);
}
