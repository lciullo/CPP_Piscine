/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:45:20 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/09 16:33:52 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

//======    Constructors / Destructors    ======

Serializer:: Serializer(void)
{
	std::cout << " Serializer : default constructor called" << std::endl;
	return ;
}

Serializer:: Serializer(const  Serializer &other)
{
	std::cout << " Serializer : copy constructor called" << std::endl;
	*this = other;
	return ;
}

Serializer::~ Serializer(void)
{
	std::cout << " Serializer : destructor called" << std::endl;
	return ;
}

//======    Overload operator            ======

Serializer & Serializer::operator=(const  Serializer &other)
{
	std::cout  << " Serializer :assignement operator called" << std::endl;
	if (this != &other)
	{
		
	}
	return (*this);
}

//======	          Methods             ======

uintptr_t	Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
