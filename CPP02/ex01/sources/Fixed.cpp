/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 08:52:46 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/08 17:38:52 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_FixedPoint = 0;
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return ;
}

Fixed::Fixed(const int Nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->_FixedPoint = Nb << this->_FractionalBits;
	
}

Fixed::Fixed(const float Nb)
{
	std::cout << "Float constructor called" << std::endl;
	this->_FixedPoint = roundf(Nb * (1 << this->_FractionalBits));
	
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void Fixed::setRawBits(int const raw)
{
	this->_FixedPoint = raw;
	return ;
}

int Fixed::getRawBits(void) const
{
	return (this->_FixedPoint);
}

float Fixed::toFloat(void) const
{
	return ((float)(this->getRawBits()) / (1 << this->_FractionalBits));
}
 
int Fixed::toInt(void) const
{
	return (this->getRawBits() >> this->_FractionalBits);
}

Fixed &Fixed::operator=(const Fixed &Object)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(Object.getRawBits());
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &Object)
{
	out << Object.toFloat();
	return (out);
}
