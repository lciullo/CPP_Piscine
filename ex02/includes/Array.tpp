/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:01:31 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/12 12:40:47 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

//======    Constructors / Destructor   ======

template <typename T>
Array<T>::Array()
{
	std::cout << CYAN << "Default constructor called" << RESET << std::endl;
	this->_n = 0;
	this->_array = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	std::cout << CYAN << "Assignement constructor called" << RESET << std::endl;
	this->_n = n;
	this->_array = new T[n];
}

template <typename T>
Array<T>::Array(const  Array &obj)
{
	std::cout << CYAN << " Array : copy constructor called" << RESET << std::endl;
	*this = obj;
}

template <typename T>
Array<T>::~Array(void)
{
	std::cout << CYAN << "Destructor called" << RESET << std::endl;
	delete [] this->_array;
}

//======    Overload operators            ======

template <typename T>
Array<T> &Array<T>::operator=(const Array &obj)
{
	this->_array = new T[obj._n];
	for (unsigned int i = 0; i < obj._n; i++)
		this->_array[i] = obj._array[i];
	this->_n = obj._n;
	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (i >= this->_n)
		throw (std::exception());
	return (this->_array[i]);
}

//======    Getter                       ======

template <typename T>
unsigned int Array<T>::size(void) const
{
	return (this->_n);
}