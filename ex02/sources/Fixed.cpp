/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 08:52:46 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/08 17:23:54 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_FixedPoint = 0;
	return ;
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
	return ;
}
//convert int to fixed point
Fixed::Fixed(const int Nb)
{
	this->_FixedPoint = Nb << this->_FractionalBits;
}
//convert float to fixed point
Fixed::Fixed(const float Nb)
{
	this->_FixedPoint = roundf(Nb * (1 << this->_FractionalBits));
}

Fixed::~Fixed(void)
{
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

//convert fixed point to float
float Fixed::toFloat(void) const
{
	return ((float)(this->getRawBits()) / (1 << this->_FractionalBits));
}

//convert fixed point to int 
int Fixed::toInt(void) const
{
	return (this->getRawBits() >> this->_FractionalBits);
}

Fixed &Fixed::operator=(const Fixed &Object)
{
	this->setRawBits(Object.getRawBits());
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &Object)
{
	out << Object.toFloat();
	return (out);
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1.toFloat() <= f2.toFloat())
		return (f1);
	return (f2);
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1.toFloat() <= f2.toFloat())
		return (f1);
	return (f2);
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1.toFloat() >= f2.toFloat())
		return (f1);
	return (f2);
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1.toFloat() >= f2.toFloat())
		return (f1);
	return (f2);
}

bool Fixed::operator>(const Fixed &Object)
{
	return (this->toFloat() > Object.toFloat());
}

bool Fixed::operator<(const Fixed &Object)
{
	return (this->toFloat() < Object.toFloat());
}

bool Fixed::operator>=(const Fixed &Object)
{
	return (this->toFloat() >= Object.toFloat());
}

bool Fixed::operator<=(const Fixed &Object)
{
	return (this->toFloat() <= Object.toFloat());
}

bool Fixed::operator==(const Fixed &Object)
{
	return (this->toFloat() == Object.toFloat());
}

bool Fixed::operator!=(const Fixed &Object)
{
	return (this->toFloat() != Object.toFloat());
}

Fixed Fixed::operator+(const Fixed &Object)
{
	Fixed	NewObject(this->toFloat() + Object.toFloat());
	return (NewObject);
}

Fixed Fixed::operator-(const Fixed &Object)
{
	Fixed	NewObject(this->toFloat() - Object.toFloat());
	return (NewObject);
}

Fixed Fixed::operator*(const Fixed &Object)
{
	Fixed	NewObject(this->toFloat() * Object.toFloat());
	return (NewObject);
}

Fixed Fixed::operator/(const Fixed &Object)
{
	Fixed	NewObject(this->toFloat() / Object.toFloat());
	return (NewObject);
}

Fixed &Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed Fixed::operator++(int Value)
{
	Fixed	TmpFixed;

	if (!Value)
		Value = 1;
	TmpFixed = *this;
	this->setRawBits(this->getRawBits() + Value);
	return (TmpFixed);
}

Fixed &Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed Fixed::operator--(int Value)
{
	Fixed	TmpFixed;

	if (!Value)
		Value = 1;
	TmpFixed = *this;
	this->setRawBits(this->getRawBits() - Value);
	return (TmpFixed);
}
